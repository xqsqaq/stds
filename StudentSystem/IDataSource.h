#ifndef IDATASOURCE_H
#define IDATASOURCE_H
#include"cstudent.h"

class IDataSource
{
public:
    IDataSource();
    virtual ~IDataSource()=0;
    //    @brief 查询所有学生信息
    //    @param stuInfos 学生们的信息
    //    @return  ture
    virtual bool SelectCstudent(QList<Cstudent> &stuInfoList)=0;
    //    @brief 添加学生信息
    //    @param stuinfo 学生们的信息
    //    @return  ture
    virtual bool AddCstudent(Cstudent &stuInfo)=0;
    //    @brief 修改学生信息
    //    @param stuinfo 学生们的信息
    //    @return  ture
    virtual bool UpdateCstudent(Cstudent &stuInfo)=0;
    //    @brief 删除学生信息
    //    @param id 学生的学号
    //    @return  ture
    virtual bool DeleteCstudent(int id)=0;

};

#endif // IDATASOURCE_H
