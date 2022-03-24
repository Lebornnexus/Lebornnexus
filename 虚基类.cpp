#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class person {
public:
	person()
	{
		cout << "���������� �Ա�" << endl;
		cin >> name >> sex;
	}
	person(string x, string y)
	{
		name = x;
		sex = y;
	}
	void show()
	{
		cout << "������" << name << endl;
		cout << "�Ա�" << sex << endl;
	}
protected:
	string name, sex;
};

class student :virtual public person{
public:	
	student()
	{
		cout << "������ѧ�� �ɼ���" << endl;
		cin >> no >> score;
	}
	student(string x, string y, string a, int b) :person(y, a)
	{
		no = x;
		score = b;
	}
	void show()
	{
		cout << "ѧ�ţ�" << no << endl;
		person::show();
		cout << "�ɼ���" << score << endl;
	}
protected:
	string no;
	int score;
};

class ustudent :public student {
public:
	ustudent()
	{
		cout << "������ѧ��רҵ��" << endl;
		cin >> major;
	}
	ustudent(string x, string y, string z, int a, string b) :person(y,z),student(x, y, z, a)
	{
		major = b;
	}
	void show()
	{
		student::show();
		cout << "רҵ��" <<major<< endl;
	}
protected:
	string major;
};

class employee :virtual public person {
public:
	employee()
	{
		cout << "�����빤�ʣ�" << endl;
		cin >> salary;
	}
	employee(string x, string y, int z) :person(x, y)
	{
		salary = z;
	}
	void show()
	{
		cout << "���ʣ�" << salary << endl;
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
	eustudent s("181487", "����", "Ů", 20, "��ҽ", 200);
	eustudent s2;
	s.show();
	s2.show();
	system("pause");
	return 0;
}