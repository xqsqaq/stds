#include "cstudent.h"

Cstudent::Cstudent()
{

}

bool Cstudent::setData(int id, QString name, QString phone, QString sex, int cet, double gpa)
{
    m_id=id;
    m_name=name;
    m_phone=phone;
    m_sex=sex;
    m_cet=cet;
    m_gpa=gpa;
    m_overallScore=0.04*cet+gpa*17.5;
    return true;
}

int Cstudent::id() const
{
    return m_id;
}

void Cstudent::setId(int newId)
{
    m_id = newId;
}

QString Cstudent::name() const
{
    return m_name;
}

void Cstudent::setName(const QString &newName)
{
    m_name = newName;
}

QString Cstudent::phone() const
{
    return m_phone;
}

void Cstudent::setPhone(const QString &newPhone)
{
    m_phone = newPhone;
}

QString Cstudent::sex() const
{
    return m_sex;
}

int Cstudent::cet() const
{
    return m_cet;
}

void Cstudent::setCet(int newCet)
{
    m_cet = newCet;
}

double Cstudent::gpa() const
{
    return m_gpa;
}

void Cstudent::setGpa(double newGpa)
{
    m_gpa = newGpa;
}

double Cstudent::overallScore() const
{
    return m_overallScore;
}

void Cstudent::setOverallScore(double newOverallScore)
{
    m_overallScore = newOverallScore;
}
