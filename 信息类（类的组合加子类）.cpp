#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Date {
public:
	Date()
	{
		cout << "�������� �� �գ�" << endl;
		cin >> year >> month >> day;
	}
	Date(int x, int y, int z)
	{
		year = x;
		month = y;
		day = z;
	}
	void show()
	{
		cout << year << "��" << month << "��" << day << "��" << endl;
	}
	~Date()
	{
		cout << "~Date" << endl;
	}
protected:
	int year, month, day;
};


class Person {
public:
	Person()
	{
		cout << "�������� ���� " << endl;
		cin >> id >> name;
	}
	Person(string x, string y, int a, int b, int c) :d1(a, b, c)
	{
		id = x;
		name = y;
	}
	void show()
	{
		cout << "��ţ�" << id << "  ������" << name << "  �������ڣ�";
		d1.show();
	}
protected:
	Date d1;
	string id, name;
};


class Teacher :protected Person {
public:
	Teacher()
	{
		cout << "�����빤�ʣ�" << endl;
		cin >> salary;
	}
	Teacher(string a, string b, int x, int y, int z, int p, int q, int r, int s) :Person(a, b, x, y, z), d2(p, q, r)
	{
		salary = s;
	}
	void show()
	{
		Person::show();
		cout << "  ��������:";
		d2.show();
		cout << "���ʣ�" << salary << endl;
	}
	~Teacher()
	{
		cout << "~Teacher" << endl;
	}
protected:
	int salary;
	Date d2;
};
int main()
{
	Teacher t1("1001", "������", 2003, 11, 27, 2013, 8, 10, 12345);
	t1.show();
	Teacher t2;
	t2.show();
	system("pause");
	return 0;
}