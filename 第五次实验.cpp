// 第四次实验.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string.h>
using namespace std;
//int main() {
//    // 使用new操作符分配一个int类型的整数
//    int* ptr = new int;
//    *ptr = 10;
//    std::cout << "动态分配的整数值为：" << *ptr << std::endl;
//
//    // 使用delete操作符释放内存
//    delete ptr;
//
//    return 0;
//}

class employee
{
private:
    string m_cName,m_cNo;
    int m_nDepartment;
public:
    void SetName(char *pcName);
    void SetNo(char* pcNo);
    void SetDept(int nDept);
    void Display();
    employee(string pcName, string pcNo,const int nDept);
};
employee::employee(string pcName, string pcNo, int nDept)
{
    m_cName = pcName;
    m_cNo = pcNo;
    m_nDepartment = nDept;
}
void employee:: SetName(char* pcName)
{
    m_cName = pcName;
}
void employee::SetNo(char* pcNo)
{
    m_cNo = pcNo;
}
void employee::SetDept(int nDept)
{
    m_nDepartment = nDept;
}
void employee::Display()
{
    cout << "姓名：" << m_cName << endl << "编号：" << m_cNo << endl << "部门：" << m_nDepartment << endl;
}
class Manager:public employee
{
private:
    int m_nLevel;
public:
    void SetLevel(int nLvl);
    void Display();
};


int main() 
{
    string name, code;
    cin >> name >> code;
    int dep=0;
    employee emp(name,code,dep );   // 创建一个对象
    emp.SetDept(3);         // 设置部门号
    emp.Display();          // 输出雇员信息

    return 0;
}

