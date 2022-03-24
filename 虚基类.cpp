#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class person {
public:
	person()
	{
		cout << "请输入姓名 性别：" << endl;
		cin >> name >> sex;
	}
	person(string x, string y)
	{
		name = x;
		sex = y;
	}
	void show()
	{
		cout << "姓名：" << name << endl;
		cout << "性别：" << sex << endl;
	}
protected:
	string name, sex;
};

class student :virtual public person{
public:	
	student()
	{
		cout << "请输入学号 成绩：" << endl;
		cin >> no >> score;
	}
	student(string x, string y, string a, int b) :person(y, a)
	{
		no = x;
		score = b;
	}
	void show()
	{
		cout << "学号：" << no << endl;
		person::show();
		cout << "成绩：" << score << endl;
	}
protected:
	string no;
	int score;
};

class ustudent :public student {
public:
	ustudent()
	{
		cout << "请输入学生专业：" << endl;
		cin >> major;
	}
	ustudent(string x, string y, string z, int a, string b) :person(y,z),student(x, y, z, a)
	{
		major = b;
	}
	void show()
	{
		student::show();
		cout << "专业：" <<major<< endl;
	}
protected:
	string major;
};

class employee :virtual public person {
public:
	employee()
	{
		cout << "请输入工资：" << endl;
		cin >> salary;
	}
	employee(string x, string y, int z) :person(x, y)
	{
		salary = z;
	}
	void show()
	{
		cout << "工资：" << salary << endl;
	}
protected:
	int salary;
};

class eustudent :public ustudent, public employee {
public:
	eustudent(string x,string y,string z,int a,string b,int c):person(y,z),ustudent(x,y,z,a,b),employee(y,z,c)
	{}
	eustudent()
	{}
	void show()
	{
		cout << endl << endl << endl;
		ustudent::show();
		employee::show();
	}
};

int main()
{
	eustudent s("181487", "卫狗", "女", 20, "牙医", 200);
	eustudent s2;
	s.show();
	s2.show();
	system("pause");
	return 0;
}