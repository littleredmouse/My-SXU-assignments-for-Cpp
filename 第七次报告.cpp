// 第七次报告.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
//class Employee
//{
//protected:
//    char* m_name;
//    char* m_no;
//
//public:
//    Employee(char* name, char* no)
//    {
//        m_name = new char[strlen(name) + 1];
//        strcpy_s(m_name,sizeof(m_name),name);
//        m_no = new char[strlen(no) + 1];
//        strcpy_s(m_no,sizeof(m_no),no);
//    }
//    virtual~Employee()
//    {
//        delete[] m_name;
//        delete[] m_no;
//        //delete[] 运算符只能释放单个指针所指向的动态分配的数组内存空间，而不能一次释放多个数组的内存空间。
//    }
//    virtual void Display()
//    {
//        cout << "员工姓名：" << m_name<<endl;
//        cout << "员工编号：" << m_no<<endl;
//    }
//};
//
//class Leader :public Employee
//{
//private:
//    char* m_posdes;
//public:
//    Leader(char* name, char* no, char* posdes):Employee(name,no)
//    {
//        
//        m_posdes =new char[strlen(posdes)+1];
//        strcpy_s(m_posdes,sizeof(posdes),posdes);
//    }
//    ~Leader()
//    {
//        delete m_posdes;
//        Employee::~Employee();
//    }
//    void Display()
//    {
//        Employee::Display();
//        cout << "职位描述：" << m_posdes<<endl;
//    }
//};
//
//
//int main()
//{
//    Leader a((char*)"奥尔加",(char*)"001",(char*)"团长");
//    a.Display();
//}


//7.2

//class employee
//{
//protected:
//	string e_name, e_no, e_PayLl;
//	double shouldDayPay;
//	double shouldPay=2700;
//public:
//	//virtual double pay();
//	double pay(double day)
//	{
//		cout << "基本工资为：2700RMB"<<endl<<"应付工资：" ;
//		return shouldPay - shouldDayPay * day && cout<<endl;
//	}
//	employee(string name, string no, string PL,double dayPay)
//	{
//		e_name = name;
//		e_no = no;
//		e_PayLl = PL;
//		shouldDayPay = dayPay;
//	}
//	//employee的重载函数
//	employee(string name, string no, string PL)
//	{
//		e_name = name;
//		e_no = no;
//		e_PayLl = PL;
//	}
//	employee() {};
//};
//
//class technician:public employee
//{
//protected:
//	double addHPay, hours,compliment_per,shouldPay;
//public:
//	virtual double pay()
//	{
//		cout << "基本工资为：5000RMB" << endl;
//		return addHPay * hours * compliment_per+shouldPay;
//	}
//	technician(string name, string no, string PL, double Hpay, double hour, double per,double s):employee(name,no,PL)
//	{
//		cout << "姓名，编号，工资级别，每小时附加酬金，当月工作时数，研究完成进度系数,基本工资";
//		addHPay = Hpay;
//		hours = hour;
//		compliment_per = per;
//		shouldPay = s;
//	}
//	technician(string name, string no, string PL) :employee(name, no, PL) {};
//};
//
//class salesman :public virtual employee
//{
//private:
//	double Msale, Payper, Bpay;
//public:
//	salesman(string n, string no, string ok, double b, double c, double d) :employee(n, no, ok)
//	{
//		Msale = b;
//		Payper = c;
//		Bpay = d;
//	}
//	virtual	double pay()
//	{
//		return Msale * Payper + Bpay;
//	}
//	double paye()
//	{
//		return Payper;
//	}
//	salesman(string n, string no, string ok) :employee(n, no, ok) {};
//};
//
//class manager :public virtual employee
//{
//protected:
//	double Bonus, Pnumber;
//public:
//	virtual double pay()
//	{
//		return Bonus * Pnumber;
//	}
//	manager(string n, string no, string ok, double b, double p) :employee(n, no, ok)
//	{
//		Bonus = b;
//	    Pnumber=p;
//	}
//	manager(string n, string no, string ok) :employee(n, no, ok) {};
//};
//
//class developermanager :public manager,public technician,public employee
//{
//public:
//	virtual double pay()
//	{
//		return manager::Bonus * manager::Pnumber / 2 + technician::addHPay * technician::hours * technician::compliment_per +employee::shouldPay / 2;}
//
//	developermanager(string n, string no, string ok) : manager(n, no, ok), technician(n, no, ok) {};
//};
//
//class salesamanager :public manager,public salesman
//{
//private:
//	double x;
//public:
//	virtual double pay()
//	{
//		return manager::pay()/2+salesman::paye()*x;
//	}
//	salesamanager(string n, string no, string ok, double x1):employee(n,no,ok),manager(n,no,ok),salesman(n,no,ok),x(x1)
//	{
//		x = x1;
//	}
//};
//
//int main()
//{
//	string a,b,c;
//	cin >> a>>b>>c;
//	technician t(a, b,c ,4, 15, 200, 1.2);
//	cout << t.pay();
//	string d, e, f;
//	cin >> d >> e >> f;
//	salesman sm(d, e, f, 5000, 0.1, 3000);
//	cout << sm.pay();
//	string h, i, j;
//	cin >> h >> i >> j;
//	manager ma(h, i, j, 4000, 0.3);
//	cout << ma.pay();
//	string k, l, m;
//	cin >> k >> l >> m ;
//	developermanager dm(k,l,m);
//	cout <<dm.pay();
//	string n, o, p;
//	cin >> n >> o >> p;
//	salesamanager smr(n,o,p,9);
//	cout << smr.pay();
//}

//7.3

//class worker
//{
//protected:
//	string name, address;
//public:
//	virtual void pay()
//	{
//		cout << name << address;
//	}
//	worker(string n, string add)
//	{
//		name = n;
//		address = add;
//	}
//};
//
//class BasedPayWorker :public worker
//{
//private:
//	double BasedPay;
//public:
//	void pay()
//	{
//		cout<<"名字为："<<name<<" 地址为："<<address<<" 工资为：" << BasedPay;
//	}
//	BasedPayWorker(string n, string add, double b) :worker(n, add)
//	{
//		BasedPay = b;
//	}
//};
//
//class NumWorker :public worker
//{
//private:
//	double number,price;
//public:
//	void pay()
//	{
//		cout << "名字为：" << name << " 地址为：" << address << " 工资为：" <<number * price;
//	}
//	NumWorker(string n, string add, double nu, double pr) :worker(n, add)
//	{
//		number = nu;
//		price = pr;
//	}
//};
//
//class TimeWorker :public worker
//{
//private:
//	double time,timepay;
//public:
//	void pay()
//	{
//		cout << "名字为：" << name << " 地址为：" << address << " 工资为：" << time * timepay;
//	}
//	TimeWorker(string n, string add, double t, double tp) :worker(n, add)
//	{
//		time = t;
//		timepay = tp;
//	}
//};
//
//int main()
//{
//	string a, b;
//	cin >> a >> b;
//	double a1;
//	cin >> a1 ;
//	BasedPayWorker bpw(a, b, a1);
//	bpw.pay();
//
//	string c, d;
//	cin >> c >> d;
//	double c1,d1;
//	cin >> c1>>d1;
//	NumWorker nw(c, d, c1, d1);
//	nw.pay();
//
//	string e, f;
//	cin >> e >> f;
//	double e1, f1;
//	cin >> e1 >> f1;
//	TimeWorker tw(e, f, e1, f1);
//	tw.pay();
//}

//7.4
class Shape
{
public:
	virtual void GetArea()
	{

	}
	virtual void GetPerimeter()
	{

	}
};

class Circle:public Shape
{
private:
	double r;
public:
	void GetArea()
	{
		cout<<"面积为："<< 3.14 * r * r<<endl;
	}
	void GetPerimeter()
	{
		cout<<"周长为：" << 3.14 * 2 * r<<endl;
	}
	Circle(double r1)
	{
		r = r1;
	}
};

class Rectangle:public Shape
{
private:
	double a, b, c;
public:
	void GetArea()
	{
		cout<<"面积为："<< a * b<<endl;
	}
	void GetPerimeter()
	{
		cout<<"周长为：" << a + b + c<<endl;
	}
	Rectangle(double a1, double b1, double c1) 
	{
		a = a1;
		b = b1;
		c = c1;
	}
};

int main()
{
	double r;
	cin >> r;
	Circle c(r);
	c.GetArea();
	c.GetPerimeter();

	double a, b, c2;
	cin >> a >> b >> c2;
	Rectangle r1(a, b, c2);
	r1.GetArea();
	r1.GetPerimeter();
}