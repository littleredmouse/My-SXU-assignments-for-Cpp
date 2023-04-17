// 第二次报告.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>
#include <iomanip>
using namespace std;
//enum YEAR { Y2020 = 2020, Y2021 = 2021, Y2022, Y2023 };
//enum MONTH { M1 = 1, M2 = 2, M3, M4, M5, M6, M7, M8, M9, M10, M11, M12 };
//
//class timetable
//{
//private:
//	//int year,month,day,hour,minute,second;
//	YEAR year;
//	MONTH month;
//	int date, h, m, s;
//
//public:
//	timetable(YEAR a, MONTH b, int c) :year(a), month(b), day(c)
//	{
//		year = a;
//		month = b;
//		date = c;
//		h = 0, m = 0, s = 0;
//	}
//
//	YEAR yr;
//	MONTH mh;
//	int day;
//	void getdate(YEAR&, MONTH&, int&);
//	void gettime(int&, int&, int&);
//	void outdate(YEAR, MONTH, int);
//	void outtime(int, int, int);
//	void list();
//};
//
//
//void timetable::getdate(YEAR& y, MONTH& m, int& d)
//{
//	y = year;
//	m = month;
//	d = date;
//};
//
//
//
//void timetable::gettime(int& a, int& b, int& c)
//
//{
//	a = h;
//	b = m;
//	c = s;
//};
//
//void timetable::outdate(YEAR a, MONTH b, int c)
//
//{
//	year = a;
//	month = b;
//	date = c;
//};
//
//void timetable::outtime(int a, int b, int c)
//
//{
//	h = a;
//	m = b;
//	s = c;
//};
//
//void timetable::list()
//{
//	cout << "年/月/日\n";
//	switch (year)
//	{
//	case Y2020:cout << "2020"; break;
//	case Y2021:cout << "2021"; break;
//	case Y2022:cout << "2022"; break;
//	case Y2023:cout << "2023"; break;
//	}
//
//	switch (month)
//	{
//	case M1:cout << "/JAN"; break;
//	case M2:cout << "/FEB"; break;
//	case M3:cout << "/MAR"; break;
//	case M4:cout << "/APR"; break;
//	case M5:cout << "/MAY"; break;
//	case M6:cout << "/JUN"; break;
//	case M7:cout << "/JLY"; break;
//	case M8:cout << "/AUG"; break;
//	case M9:cout << "/SEP"; break;
//	case M10:cout << "/OCT"; break;
//	case M11:cout << "/NOV"; break;
//	case M12:cout << "/DEC"; break;
//	}
//	cout << "/" << date << "\n";
//	cout << "时：分：秒";
//	cout << h << ":" << m << ":" << s << "\n";
//};
//
//int main()
//{
//	timetable op(Y2023, M3, 17);
//	op.list();
//	int d;
//	YEAR y{};
//	MONTH m{};
//	int ac, bc;
//	cin >> ac >> bc;
//	cin >> d;
//	timetable A(y, m, d);
//	A.getdate(y, m, d);
//	A.outdate(y, m, d);
//	int h, mi, s;
//	cin >> h >> mi >> s;
//	A.outtime(h, mi, s);
//	A.list();
//}

//4.4
//#include <iostream>
//using namespace std;
//
//class point
//{
//    friend class rectangle;
//public:
//    point(double a, double b)
//    {
//        x = a;
//        y = b;
//    }
//
//    void changepoint(double a, double b)
//    {
//        x = a;
//        y = b;
//    }
//
//    void showpoint()
//    {
//        cout << "(" << x << "," << y << ")";
//    }
//private:
//    double x;
//    double y;
//};
//class rectangle
//{
//public:
//    rectangle(double a, double  b, double  c, double  d):A(a,b),B(c,d)
//    {
//        
//    }
//    void change_rectangle(double a,double b,double c,double d)
//    {
//        A.changepoint(a, b);
//        B.changepoint(c, d);
//    }
//
//    double calculate_rectangleS()
//    {
//        return (A.x - B.x) * (A.y - B.y);
//    }
//
//    double calculate_rectangleC()
//    {
//        return 2 * (B.x - A.x) + 2 * (B.y - A.y);
//    }
//    
//    void show_tangle()
//    {
//        cout << "左下角坐标：";
//        A.showpoint();
//        cout << endl;
//        cout << "右上角坐标：";
//        B.showpoint();
//        cout << endl;
//    }
//
//private:
//    point A;
//    point B;
//
//};
//
//int main()
//{
//    double a2{};//初始化变量，使得程序更安全
//    double b2{};
//    double c2{};
//    double d2{};
//    rectangle R(a2, b2, c2, d2);
//    cout << "输入左下角坐标";
//    cin >> a2 >> b2;
//    cout << "输入右上角坐标";
//    cin >> c2 >> d2;
//    R.change_rectangle(a2, b2, c2, d2);
//    R.show_tangle();
//    cout << "周长为：" << R.calculate_rectangleC() << endl;
//    cout << "面积为：" << R.calculate_rectangleS();
//    return 0;
//}

//4.5
//#include <iostream>
//using namespace std;
//class circle
//{
//public:
//	circle(double a)
//	{
//
//	}
//
//	void input_r(double a)
//	{
//		r = a;
//	}
//
//	double circle_S()
//	{
//		return 3.14 * r * r;
//	}
//
//	double circle_C()
//	{
//		return 3.14 * 2 * r;
//	}
//
//	void circle_show()
//	{
//		cout << "圆的面积为：";
//		cout << circle_S() << endl;
//		cout << "圆的周长为：" << circle_C() << endl;
//	}
//
//private:
//	double r;
//};
//
//int main()
//{
//	double r1{};
//	circle c1(r1);
//	cin >> r1;
//	c1.input_r(r1);
//	c1.circle_C();
//	c1.circle_S();
//	c1.circle_show();
//}

//4.6
//#include <iostream>
//using namespace std;
//class person
//{
//public:
//	person(string a, string b, string c, string d, string e)
//	{
//
//	}
//	void get_IDline(string s)
//	{
//		l = s;
//	}
//
//	void get_name(string s)
//	{
//		n = s;
//	}
//
//	void  get_sex(string s)
//	{
//		sex = s;
//	}
//
//	void get_birthday(string s)
//	{
//		birth = s;
//	}
//
//	void get_homeaddress(string s)
//	{
//		ad = s;
//	}
//
//	void list()
//	{
//		cout << "身份证号：" << l << endl;
//		cout << "姓名：" << n << endl;
//		cout << "性别：" << sex << endl;
//		cout << "生日：" << birth << endl;
//		cout << "家庭住址：" << ad << endl;
//	}
//public :
//	string l, n, sex, birth, ad;
//};
//
//int main()
//{
//	string a, b, c, d, e;
//	cin >> a >> b >> c >> d >> e;
//	person p(a,b,c,d,e);
//	p.get_IDline(a);
//	p.get_name(b);
//	p.get_sex(c);
//	p.get_birthday(d);
//	p.get_homeaddress(e);
//	p.list();
//}


//第三次实验报告
//4.7在4.6时已经使用过友元函数，不予展示

//4.8

//#include <iostream>
//class complex
//{
//private:
//	double a;
//public:
//	double operator +=(complex a);
//	double operator -(complex a);
//	void get();
//};
//void complex::get()
//{
//	cin >> a;
//}
//double complex::operator += (complex a)
//{
//	return this->a + a.a;
//}
//double complex::operator-(complex a)
//{
//	return this->a - a.a;
//}
//友元函数写法
//class complex
//{
//	friend	double operator +=(complex &a,complex &b);
//	friend 	double operator -(complex &a,complex &b);
//private:
//	double a;
//public:
//	void get();
//};
//void complex::get()
//{
//	cin >> a;
//}
//double operator += ( complex &a,complex &b)
//{
//	return b.a + a.a;
//}
//double operator-(complex &a,complex &b)
//{
//	return a.a - b.a;
//}
//int main()
//{
//	complex a, b;
//	a.get();
//	b.get();
//	cout << (a += b) << endl;
//	cout << (a - b);
//}

//4.9

//class RMB
//{
//private:
//	int yuan, jiao, fen;
//public:
//	void get()
//	{
//		cin >> yuan >> jiao >> fen;
//	}
//	void print()
//	{
//		cout<<yuan << "元" <<jiao  << "角"  << fen << "分" <<endl;
//	}
//	operator float();
//};
//
//RMB::operator float()
//{
//	float ok = yuan + (jiao / 10.0) + (fen / 100.0);
//	return ok;
//}
//int main()
//{
//	int a, b, c;
//	RMB rmb;
//	rmb.get();
//	rmb.print();
//	float f;
//	f = float(rmb);
//	cout << f << "元";
//	return 0;
//}

//class yuanzhu
//{
//private:
//	double m_x, m_y;
//	double m_radius;
//	double m_height;
//public:
//	yuanzhu(double x, double y, double radius, double height):m_x(x),m_y(y),m_radius(radius),m_height(height){}
//	yuanzhu(yuanzhu&);
//
//	void getstatic()
//	{
//		cin >> m_x >> m_y>>m_radius>>m_height;
//	}
//	double getvolume()
//	{
//		return 3.14 * m_radius * m_radius * m_height;
//	}
//	double getarea()
//	{
//		return 3.14 * m_radius * m_radius + 3.14 * 2 * m_radius * m_height;
//	}
//};

//class f
//{
//private:
//	double m_numerator, m_denominator;
//public:
//	f(double numerator, double denominator) :m_numerator(numerator), m_denominator(denominator) {}
//	void get();
//	double operator+ (f);
//	double operator-(f);
//	void display();
//	f() = default;
//};
// void f:: get()
//{
//	cin >> m_numerator >> m_denominator;
//}
//
//double f:: operator+(f a)
//{
//	return m_numerator/m_denominator + a.m_numerator/a.m_denominator;
//}
//double f::operator-(f a)
//{
//	return m_numerator / m_denominator - a.m_numerator / a.m_denominator;
//}
//void f::display()
//{
//	cout << m_numerator << "/" << m_denominator<<endl;
//}
//
//int main()
//{
//	double a=0.0, b=0.0, c=0.0,d=0.0;
//	//cin >> a >> b>>c>>d;
//	f fun1(a,b);
//	f fun2(c,d);
//	fun1.get();
//	fun2.get();
//	fun1.display();
//	fun2.display();
//	double x = fun1 - fun2;
//	cout << x;
//}

//class ti
//{
//private:
//	double lenth,width,height;
//	static int num;
//public:
//	ti() {//无参构造
//		num++;
//	}
//	ti(double len,double wid,double high):lenth(len),width(wid),height(high){//有参构造
//		num++;
//	}
//	void display();
//	static int getcount()//获取立方体数量
//	{
//		return num;
//	}
//	double getvolum();//输出体积
//	~ti()
//	{
//		num--;//析构
//	}
//};
//double ti::getvolum()
//{
//	return lenth * lenth * lenth;
//}
//void ti::display()
//{
//	cout << "边长为：" << lenth << "体积为" << getvolum();
//}
//int ti::num = 0;
//int main()
//{
//	double a,b,c;
//	double d, e, f;
//	cin >> a>> b >>c;
//	cin >> d >> e >> f;
//	ti cub(a,b,c);
//	ti cuber(d,e,f);
//	cout << "立方体1的体积为：" << cub.getvolum()<<endl;
//	cout << "立方体2的体积为：" << cuber.getvolum() << endl;
//	cout<<"立方体数量为"<<ti::getcount();
//}
