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
//void print(TDate ad)
//{
//	cout << ad.Year << "年" << ad.Month << "月" << ad.Day<<"日";
//}
//
//int main()
//{
//	TDate ad;
//	print(ad);
//	int aa, bb, cc;
//	cin >> aa >> bb >> cc;
//	ad.getYear(aa);
//	ad.getMonth(bb);
//	ad.getDay(cc);
//	print(ad);
//}


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


//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class mystring {
//public:
//    mystring();
//    mystring(const char* str);
//    mystring(const mystring& str);
//
//    // 析构函数
//    ~mystring()
//    {
//        delete[] m_str; // 释放内存
//        cout << "析构函数已调用"<<endl;
//    }
//
//    // 运算符重载
//    char& operator[](const int index) {
//        return m_str[index];
//    }
//
//    mystring& operator=(const mystring& rhs) 
//    {
//        if (this != &rhs) {
//            this->m_str = rhs.m_str;
//        }
//        return *this;
//    }
//
//    mystring operator+( const mystring& rhs)
//    {
//        mystring ths; // 创建一个新的字符串
//        int len_my = strlen(this->m_str); // 获取lhs长度
//        int len_rhs = strlen(rhs.m_str); // 获取rhs长度
//        int len_ths = len_my + len_rhs; // 新字符串长度
//        ths.m_str = new char[len_ths + 1]; // 分配一段内存
//        strcpy_s(ths.m_str, len_my + 1,this->m_str); // 复制lhs到res中
//        strcat_s(ths.m_str, len_ths + 1, rhs.m_str); // 将rhs连接到res中
//        return ths; // 返回新字符串
//    }
//
//    friend bool operator<(const mystring& lhs, const mystring& rhs)
//    {
//        return strcmp(lhs.m_str, rhs.m_str)<0; // 比较两个字符串大小<
//    }
//
//    friend bool operator>(const mystring& lhs, const mystring& rhs)
//    {
//        return strcmp(lhs.m_str, rhs.m_str)>0; // 比较两个字符串大小>
//    }
//
//    friend bool operator==(const mystring& lhs, const mystring& rhs)
//    {
//        return strcmp(lhs.m_str, rhs.m_str)== 0; // 比较两个字符串大小==
//    }
//
//    friend ostream& operator<<(ostream& out, const mystring& obj) {
//        out << obj.m_str;
//        return out;
//    }
//
//private:
//    char* m_str;
//};
//mystring::mystring() // 默认构造函数
//{
//    m_str = new char[1]; // 动态分配一个字节的内存
//    m_str[0] = '\0'; // 以空字符结尾
//}
//mystring::mystring(const char* str) // 字符串构造函数
//{
//    int len = strlen(str); // 获取字符串长度
//    m_str = new char[len + 1]; // 分配一段内存
//    strcpy_s(m_str, len + 1, str); // 复制字符串到m_str中
//}
//mystring::mystring(const mystring& str) // 拷贝构造函数
//{
//    int len = strlen(str.m_str); // 获取m_str长度
//    m_str = new char[len + 1]; // 分配一段内存
//    strcpy_s(m_str, len + 1, str.m_str); // 复制data到新分配的内存
//}
//
//int main() {
//    mystring str1("Bilibiliの");
//    mystring str2("Misaka Kayato");
//    mystring str3(str1);
//    // 输出str1和str2
//    cout << "str1: " << str1 << endl;
//    cout << "str2: " << str2 << endl;
//
//    cout << "语句集合：" << str1 + str2 << endl;
//
//    cout << "复制一下第一句话:" << str3<<endl;
//
//    bool a;
//    a = str1 > str2;
//    if(a)
//    cout << "前者是否比后者更长？" << "是" << endl;
//    else cout << "前者是否比后者更长？" << "否" << endl;
//    a = str1 == str2;
//    if(a>0)
//    cout << "前者是否与后者相等？" << "是" << endl;
//    else  cout << "前者是否与后者相等？" << "否" << endl;
//
//    cout << "来看看第一句话的前四个字符：" << str1[0] << str1[1] << str1[2] << str1[3]<<endl;
//    return 0;
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
//template <class T>
//class  add 
//{
//private:
//	T a, b;
//public:
//	add(){}
//	add(T a1, T b1) :a(a1), b(b1){}
//	T adding(T a, T b)
//	{
//		return a + b;
//	}
//	T adding()
//	{
//		return a + b;
//	}
//};
//
//
//int main()
//{
//	add<double> d;
//	double c = d.adding(9.6,4.7);
//	cout << c<<endl;
//
//	add<int> f;
//	int g = f.adding(4, 3);
//	cout << g<<endl;
//
//	add<double> kk(4.7,3);
//	double k = kk.adding();
//	cout << k;
//}
//4.5

template<typename T>
class calculate
{
private: 
	T a,b,c;
public: 
	calculate(T a, T b, T c) :a(a), b(b), c(c)/*初始化列表，用于对成员变量进行初始化*/{}
	void max()
	{
		T t = a;
		if (b > t)
			t = b;
		if (c > t)
			t = c;
		cout << "Max valus is " << t << endl;
	}
	void min()
	{
		T t = a;
		if (b < t)
			t = b;
		if (c < t)
			t = c;
		cout << "Min value is " << t << endl;
	}

	void input()
	{
		cout << "Please skype three values";
		cin >> a >> b >> c;
	}
};

//template<>//特化calculate类模板，使其能够处理char类型的数据
//class calculate<char*>
//{
//private:
//	char * a, * b, * c;
//public:
//	calculate(char* a, char* b, char* c)
//	{//分配内存并将字符复制到指向它们的新内存中
//		this->a = new char[strlen(a) + 1];
//		strcpy(this->a, a);//这段代码在一个类的成员函数中使用，假设这个成员函数的名称为func，其中a是该类的一个私有成员变量，用于存储一个字符串。
                             //第一行代码this->a = new char[strlen(a) + 1]; 创建了一个动态分配的字符数组，并将其地址赋值给了对象（即调用该函数）的私有成员变量a。这里使用了this指针来访问成员变量a，以便区分该变量和函数参数a（如果存在同名情况）。
                             //第二行代码strcpy(this->a, a); 将函数参数a所指向的字符串复制到类的私有成员变量a所指向的字符数组中。
                             //总之，这两行代码的作用是将一个字符串拷贝到类的私有成员变量中，并通过动态分配内存来实现。需要注意的是，在不再需要这个动态分配的内存时，必须手动释放它以避免内存泄漏。
//		this->b = new char[strlen(b) + 1];
//		strcpy(this->b, b);
//		this->c = new char[strlen(c) + 1];
//		strcpy(this->c, c);
//	}
//	char* max()
//	{
//		char* m = strcmp(a, b) > 0 ? a : b;
//		return strcmp(m, c) > 0 ? m : c;
//	}
//	char* min()
//	{
//		char* m = strcmp(a, b) < 0 ? a : b;
//		return strcmp(m, c) < 0 ? m : c;
//	}
//	~calculate()
//	{
//		delete[]a;
//		delete[]b;
//		delete[]c;
//	}
//};

int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	char m, n, o;
	cin >> m >> n >> o;
	string q, w, e;
	cin >> q >> w >> e;
	calculate <double> project(a,b,c);
	project.max();
	project.min();
	calculate<char>project1(m, n, o);
	project1.min();
	project1.max();
	calculate<string>project3(q, w, e);
	project3.max();
	project3.min();
	
	return 0;
}

