#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

class Date {
public:
	Date()
	{
		cout << "请输入时间：" << endl;
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
		cout << "出生时间：" << year << "年" << month << "月" << day << "日" << endl;
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
		cout << "请输入时间：" << endl;
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
		cout << "出生时刻：" << hour << "时" << min << "分" << sec << "秒" << endl;
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
		cout << "请输入孩子的名字：" << endl;
		cin >> name;
	}
	Birthtime(string s, int x, int y, int z, int a, int b, int c) :Date(x, y, z), Time(a, b, c)
	{
		name = s;
	}
	void show()
	{
		cout << "孩子姓名：" << name << "   ";
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
	Birthtime b1("张宏宇", 2003, 6, 7, 14, 20, 31),b2;
	b1.show();
	b2.show();
	system("pause");
	return 0;
}