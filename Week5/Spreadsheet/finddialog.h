#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QDialog>

/* Forward declarations
 * You could #include these, or, since we're only declaring pointers,
 * you can just tell the compiler, "hey, there's a class called QLabel
 * here!" by declaring it without defining it at all.
 */
class QLabel;
class QLineEdit;
class QCheckBox;

/*
 * This class represents our actual find dialog. It inherits QDialog
 * because it is actually a dialog.
 */
class FindDialog : public QDialog
{
    // This gets turned into boilerplate code at compile-time
    Q_OBJECT

public:
    // The constructor takes a pointer to whichever object
    // "owns" this dialog. This could be nothing, or a main window.
    FindDialog(QWidget *parent = nullptr);

signals:
    void findNext(const QString &str, Qt::CaseSensitivity cs);
    void findPrevious(const QString &str, Qt::CaseSensitivity cs);

private slots:
    void findClicked();
    void enableFindButton(const QString &text);

private:
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *caseCheckBox;
    QCheckBox *backwardCheckBox;
    QPushButton *findButton;
    QPushButton *closeButton;
};

#endif // FINDDIALOG_H
