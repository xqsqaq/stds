#ifndef CSTUDENT_H
#define CSTUDENT_H
#include<QString>
#include<QMetaType>
class Cstudent
{
public:
    Cstudent();
    bool setData(int id, QString name,QString phone,QString sex, int cet,double gpa);
    int id() const;
    void setId(int newId);

    QString name() const;
    void setName(const QString &newName);

    QString phone() const;
    void setPhone(const QString &newPhone);

    QString sex() const;

    int cet() const;
    void setCet(int newCet);

    double gpa() const;
    void setGpa(double newGpa);

    double overallScore() const;
    void setOverallScore(double newOverallScore);

private:
    int m_id;//学生id
    QString m_name;//姓名
    QString m_sex;//性别
    QString m_phone;//电话号码
    int m_cet;//0~750
    double m_gpa;//0~4
    double m_overallScore;//满分 100=cet*0.04+gpa*17.5
};
Q_DECLARE_METATYPE(Cstudent)
#endif // CSTUDENT_H
