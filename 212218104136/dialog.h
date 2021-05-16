#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_Exit_Button_clicked();

    void on_Confirm_Button_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
