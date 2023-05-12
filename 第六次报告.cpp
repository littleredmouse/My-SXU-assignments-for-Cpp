// 第六次报告.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

//class Animal
//{
//private:
//    int m_nWeight;
//public:
//    void SetWeight(int nWeight)
//    {
//        m_nWeight=nWeight;
//    }
//    void GetWeight()
//    {
//        cout<< m_nWeight;
//    }
//};
//
//class Horse :public Animal
//{
//public:
//    void Run()
//    {
//        cout << "I can run" << endl;
//    }
//};
//
//class Bird :public Animal
//{
//public:
//   void  Fly()
//    {
//        cout << "I can fly" << endl;
//    }
//};
//
//class Pegasus :public Bird, public Horse
//{
//public:
//   void show()
//    {
//       cout << "My weight is ";
//        Animal::GetWeight();
//    }
//};
//
//int main()
//{
//    Pegasus rainbow;
//    rainbow.Fly();
//    rainbow.Run();
//    rainbow.Animal::SetWeight(10);
//    rainbow.show();
//}


//6.2
class  Base
{
private:
	string name;
	int age;
public:
	void setName(string a)
	{
		name = a;
	}
	void setAge(int a)
	{
		age = a;
	}
	void getName()
	{
		cout << name;
	}
	void getAge()
	{
		cout << age;
	}
};

class leader : virtual public Base
{
private:
	string office, department;
public:
	void setOffice(string off)
	{
		this->office=off;
		//office = off;
	}
	void setDepartment(string a)
	{
		department = a;
	}
	void getOffice()
	{
		cout << office;
	}
	void getDepartment()
	{
		cout << department;
	}
};

class Engineer :virtual public Base
{
private:
	string class1, major;
public:
	void setClass(string a)
	{
		class1 = a;
	}
	void setMajor(string a)
	{
		major = a;
	}
	void getClass1()
	{
		cout << class1;
	}
	void getMajor()
	{
		cout << major;
	}
};

class Chairman:public leader,public Engineer
{
public:
	void showClass()
	{
		cout << "职称为：";
		getClass1();
		cout << endl;
	}
	void showMajor()
	{
		cout << "专业为：";
		getMajor();
		cout << endl;
	}
	void showOffice()
	{
		cout << "职务为：";
		getOffice();
		cout << endl;
	}
	void showDepartment()
	{
		cout << "部门为：";
		getDepartment();
		cout << endl;
	}
	void show()
	{
		cout << "名字：";
		Base::getName();
		cout << endl<<"年龄：";
		Base::getAge();
		cout <<endl;
		cout << "部门为：";
		getDepartment();
		cout << endl;
		cout << "职务为：";
		getOffice();
		cout << endl;
		cout << "专业为：";
		getMajor();
		cout << endl;
		cout << "职称为：";
		getClass1();
		cout << endl;
	}
};

int main()
{
	Chairman Scoot;
	Scoot.setAge(80);
	Scoot.setClass("p9");
	Scoot.setDepartment("A小町");
	Scoot.setMajor("唱歌");
	Scoot.setName("Hoshino Ai");
	Scoot.setOffice("Idol");
	Scoot.show();
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
