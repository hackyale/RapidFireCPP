#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QPushButton *quitBtn = new QPushButton("Quit");
    QObject::connect(quitBtn, SIGNAL(clicked()), &app, SLOT(quit()));
    quitBtn->show();
    return app.exec();
}
