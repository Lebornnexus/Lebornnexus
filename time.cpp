#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Time {
public:
	Time()
	{
		cout << "请输入时，分，秒：" << endl;
		cin >> hour >> min >> sec;
	}
	Time(int h, int m, int s)
	{
		hour = h;
		min = m;
		sec = s;
	}
	void increase(int h,int m,int s)
	{
		hour = hour + h;
		min = min + m;
		sec = sec + s;
	}
	void show()
	{
		if (hour < 0 || min < 0 || sec < 0)
			cout << "输入数据错误" << endl;
		else 
		{

			while (sec >= 60)
			{
				min++;
				sec -= 60;
			}
			while (min >= 60)
			{
				hour++;
				min -= 60;
			}
			while (hour >= 24)
			{
				hour -= 24;
			}
			cout << "时间为" << hour << ":" << min << ":" << sec << ":" << endl;
		}
	}
private:
	int hour, min, sec;
};
int main()
{
	Time t1, t2(23, 59, 59);
	t1.show();
	t2.show();
	t2.increase(0, 0, 1);
	t2.show();
	t2.increase(12, 100, 100);
	t2.show();
	system("pause");
	return 0;
}