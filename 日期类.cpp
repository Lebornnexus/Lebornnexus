#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class Date {
public:
	Date()
	{
		cout << "请输入日期年 月 日：" << endl;
		cin >> year >> month >> day;
	}
	Date(int x, int y, int z)
	{
		year = x;
		month = y;
		day = z;
	}
	int getyear()
	{
		return year;
	}
	int getmonth()
	{
		return month;
	}
	int getday()
	{
		return day;
	}
	void show()
	{
		cout << "今日为" << year << "年" << month << "月" << day << "日" << endl;
	}
	int isleap()
	{
		int k = 0;
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) 
		{
			cout << year << "年" << "is a leap year" << endl;
			k = 1;
		}
			
		else
		{
			cout << year << "年" << "is not a leap year" << endl;
			k = 0;
		}
		return k;
	}
	int whichday()
	{
		int n = 0;
		int k1 = isleap();
		switch (month) 
			{
			case 1:n = day; break;
			case 2:n = day + 31; break;
			case 3:n = day + 31+29; break;
			case 4:n = day + 31 + 29+31; break;
			case 5:n = day + 31 + 29+31+30; break;
			case 6:n = day + 31 + 29+31+30+31; break;
			case 7:n = day + 31 + 29+31+30+31+30; break;
			case 8:n = day + 31 + 29+31+30+31+30+31; break;
			case 9:n = day + 31 + 29+31+30+31+30+31+31; break;
			case 10:n = day + 31 + 29+31+30+31+30+31+31+30; break;
			case 11:n = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30+31; break;
			case 12:n = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31+30; break;
		   }

		if (k1 == 0 && n > 2)
			n = n - 1;
		cout << year << "年" << month << "月" << day << "日是本年第" << n << "天" << endl;
		return n;
	}
	void increase(int x)
	{
		int a = isleap();
		int b = whichday();
		int c,year,month,day,days,y1;
		if (a == 1)
			c = 366;
		else if(a==0)
			c = 365;
		if (b + x <= c)
		{
			year = getyear();
			days = b + x;
		}
		else if (b + x > c)
		{
			y1 = (x - (c - b)) / 365 ;
			year = getyear() + y1 + 1;
			days = (x - (c - b)) - y1 * 365;
			for (int i = getyear(); i <= year; i++)
			{
				if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
					days -= days;
			}
		}
		judge(year, days);
	}
	void judge(int x, int y)
	{
		int year = x, days = y;

	}

private:
	int year, month, day;
};
int main()
{
	Date d1;
	d1.show();
	d1.isleap();
	d1.whichday();
	system("pause");
	return 0;
}