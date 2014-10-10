#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QLabel *label = new QLabel("Hello, HackYale!");
    label->show();
    return app.exec();
}
