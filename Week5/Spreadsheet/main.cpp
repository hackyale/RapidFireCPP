#include <QApplication>
#include "finddialog.h"
#include "gotocelldialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FindDialog findDialog;
    findDialog.show();

    GoToCellDialog cellDialog;
    cellDialog.show();
    return a.exec();
}
