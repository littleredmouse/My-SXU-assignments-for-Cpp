// 第三次报告.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
//4.1

//class TDate
//{
//private:
//	int Year=2023, Month=1, Day=1;
//public:
//    TDate();
//	TDate(int a, int b, int c);
//	void getDay(int a=1);
//	void getMonth(int b=1 );
//	void getYear(int c = 2023);
//	friend void print(TDate ad);
//};
//
//TDate::TDate(int y,int m,int d)
//{
//	Year = y;
//	Month = m;
//	Day = d;
//}
//
// TDate::TDate()
//{
//	Year = 2023;
//	Month = 1;
//	Day = 1;
//}
//
//void TDate::getDay(int a)
//{
//	Day = a;
//}
//
//void TDate::getMonth(int b )
//{
//	Month = b;
//}
//
//void TDate::getYear(int c )
//{
//	Year = c;
//}
//
//
//
//void print(TDate ad)
//{
//	cout << ad.Year << " " << ad.Month << " " << ad.Day;
//}
//
//int main()
//{
//	int aa, bb, cc;
//	cin >> aa >> bb >> cc;
//	TDate ad;
//	ad.getYear(aa);
//	ad.getMonth(bb);
//	ad.getDay(cc);
//	print(ad);
//}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

//4.2

//class mystring
//{
//private:
//	string c, b;
//public:
//	mystring(string a,string b);
//	void operator = (string a);
//	void operator +(string a);
//	void operator <(string a);
//	void operator >(string a);
//	void operator ==(string a);
//	void operator [](string a);
//};
//
//void mystring::operator+(string a)
//{
//
//}

//4.3

//template<typename T>
//T minin(T a, T b)
//{
//	return a < b ? a : b;
//}
//
//template <typename T> T max(const T* r_array, int size)
//{
//	T max_val = r_array[0];
//	int i;
//	for (int i = 1; i < size; ++i)
//		if (r_array[i] > max_val)max_val = r_array[i];
//	return max_val;
//}

//4.4

//class add 
//{
//private:
//	double a, b;
//	int c, d;
//public:
//	double adding();
//	double adding(double c, double d);
//	int adding(int a, int b);
//	add();
//	add(double a, double b);
//};
//
//double add::adding()
//{
//	return (a + b);
//}
//
//int adding(int a, int b)
//{
//	return (a + b);
//}
//
//double adding(double a, double b)
//{
//	return (a + b);
//}

//4.5

//template<typename T>
//class calculate
//{
//private: 
//	T a,b,c;
//public: 
//	calculate(T a, T b, T c) :a(a), b(b), c(c)/*初始化列表，用于对成员变量进行初始化*/{}
//	void max()
//	{
//		T t = a;
//		if (b > t)
//			t = b;
//		if (c > t)
//			t = c;
//		cout << "Max valus is " << t << endl;
//	}
//	void min()
//	{
//		T t = a;
//		if (b < t)
//			t = b;
//		if (c < t)
//			t = c;
//		cout << "Min value is " << t << endl;
//	}
//
//	void input()
//	{
//		cout << "Please skype three values";
//		cin >> a >> b >> c;
//	}
//};
//
////template<>//特化calculate类模板，使其能够处理char类型的数据
////class calculate<char*>
////{
////private:
////	char * a, * b, * c;
////public:
////	calculate(char* a, char* b, char* c)
////	{//分配内存并将字符复制到指向它们的新内存中
////		this->a = new char[strlen(a) + 1];
////		strcpy(this->a, a);//这段代码在一个类的成员函数中使用，假设这个成员函数的名称为func，其中a是该类的一个私有成员变量，用于存储一个字符串。
//                             //第一行代码this->a = new char[strlen(a) + 1]; 创建了一个动态分配的字符数组，并将其地址赋值给了对象（即调用该函数）的私有成员变量a。这里使用了this指针来访问成员变量a，以便区分该变量和函数参数a（如果存在同名情况）。
//                             //第二行代码strcpy(this->a, a); 将函数参数a所指向的字符串复制到类的私有成员变量a所指向的字符数组中。
//                             //总之，这两行代码的作用是将一个字符串拷贝到类的私有成员变量中，并通过动态分配内存来实现。需要注意的是，在不再需要这个动态分配的内存时，必须手动释放它以避免内存泄漏。
////		this->b = new char[strlen(b) + 1];
////		strcpy(this->b, b);
////		this->c = new char[strlen(c) + 1];
////		strcpy(this->c, c);
////	}
////	char* max()
////	{
////		char* m = strcmp(a, b) > 0 ? a : b;
////		return strcmp(m, c) > 0 ? m : c;
////	}
////	char* min()
////	{
////		char* m = strcmp(a, b) < 0 ? a : b;
////		return strcmp(m, c) < 0 ? m : c;
////	}
////	~calculate()
////	{
////		delete[]a;
////		delete[]b;
////		delete[]c;
////	}
////};
//
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	char m, n, o;
//	cin >> m >> n >> o;
//	string q, w, e;
//	cin >> q >> w >> e;
//	calculate <int> project(a,b,c);
//	project.max();
//	project.min();
//	calculate<char>project1(m, n, o);
//	project1.min();
//	project1.max();
//	calculate<string>project3(q, w, e);
//	project3.max();
//	project3.min();
//	
//	return 0;
//}

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
