#ifndef ADDSTUINFODIALOG_H
#define ADDSTUINFODIALOG_H

#include <Cstudent.h>
#include <QDialog>

namespace Ui {
class AddStuInfoDialog;
}

class AddStuInfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddStuInfoDialog(QWidget *parent = nullptr);
    ~AddStuInfoDialog();
    void InitUI();
    bool clearData();
    //展示数据
    bool display(int id, QString name,QString phone,QString sex, int cet,double gpa);
    void setIsupdata(bool isupdata);
signals:
    void addInfo(Cstudent &stuInfo);
    void sig_updata(Cstudent &stuInfo);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::AddStuInfoDialog *ui;
    bool m_isupdata;//是否修改窗口 true:修改 false:添加窗口

};

#endif // ADDSTUINFODIALOG_H
