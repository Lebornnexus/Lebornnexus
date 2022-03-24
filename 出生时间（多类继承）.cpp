#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

class Date {
public:
	Date()
	{
		cout << "������ʱ�䣺" << endl;
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
		cout << "����ʱ�䣺" << year << "��" << month << "��" << day << "��" << endl;
	}
	~Date()
	{
		cout << "~Date" << endl;
	}
protected:
	int year, month , day;
};

class Time {
public:
	Time()
	{
		cout << "������ʱ�䣺" << endl;
		cin >> hour >> min >> sec;
	}
	Time(int x, int y, int z)
	{
		hour = x;
		min = y;
		sec = z;
	}
	void show()
	{
		cout << "����ʱ�̣�" << hour << "ʱ" << min << "��" << sec << "��" << endl;
	}
	~Time()
	{
		cout << "~Time" << endl;
	}
protected:
	int hour, min, sec;
};

class Birthtime:protected Date,protected Time {
public:
	Birthtime()
	{
		cout << "�����뺢�ӵ����֣�" << endl;
		cin >> name;
	}
	Birthtime(string s, int x, int y, int z, int a, int b, int c) :Date(x, y, z), Time(a, b, c)
	{
		name = s;
	}
	void show()
	{
		cout << "����������" << name << "   ";
		Date::show();
		Time::show();
	}
	~Birthtime()
	{
		cout << "~Birthtime" << endl;
	}
protected:
	string name;
};
int main()
{
	Birthtime b1("�ź���", 2003, 6, 7, 14, 20, 31),b2;
	b1.show();
	b2.show();
	system("pause");
	return 0;
}