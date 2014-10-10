#include <QApplication>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>
#include <QLabel>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget *window = new QWidget;
    window->setWindowTitle("Enter Your Age");

    QSpinBox *spinBox = new QSpinBox;
    QSlider *slider = new QSlider(Qt::Horizontal);
    spinBox->setRange(0,130);
    slider->setRange(0,130);

    QLabel *messageLabel = new QLabel("");

    QObject::connect(spinBox, SIGNAL(valueChanged(int)),
                     slider, SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int)),
                     spinBox, SLOT(setValue(int)));
    QObject::connect(slider, &QSlider::valueChanged, [&] (int val) {
        QString ailment;
        if (val < 14) ailment = "living with your parents";
        else if(val < 18) ailment = "high school";
        else if(val < 21) ailment = "the drinking age";
        else if(val > 100) ailment = "you're dead";
        else if(val > 80) ailment = "arthritis";
        else ailment = "responsibility";
        messageLabel->setText(QString("lol, %1, sucks to be you").arg(ailment));
    });
    spinBox->setValue(20);

    QHBoxLayout *sliderBox = new QHBoxLayout;
    sliderBox->addWidget(spinBox);
    sliderBox->addWidget(slider);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addLayout(sliderBox);
    layout->addWidget(messageLabel);

    window->setLayout(layout);
    window->resize(300, 50);
    window->show();

    return app.exec();
}
