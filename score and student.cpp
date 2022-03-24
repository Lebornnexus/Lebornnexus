#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class score {
public:
	score()
	{
		cout << "请输入学生语文 数学 英语成绩" << endl;
		cin >> chinese >> math >> english;
	}
	score(double x, double y, double z)
	{
		chinese = x;
		math = y;
		english = z;
	}
	void show()
	{
		cout << "语文:" << chinese << endl;
		cout << "数学:" << math << endl;
		cout << "英语:" << english<< endl;
	}
	~score()
	{
		cout << "成绩已清除" << endl;
	}
private:
	double chinese, math, english;
	
};
class student {
public:
	student()
	{
		cout << "请输入学生的学号 姓名：" << endl;
		cin >> id >> name;
	}
	void show()
	{
		cout <<"学号：" << id<<endl;
		cout <<"姓名：" << name<<endl;
		s.show();
	}
	~student()
	{
		cout << "身份信息已清除" << endl;
	}
private:
	string name, id;
	score s;
	
};
int main()
{
	student c1;
	c1.show();
	system("pause");
	return 0;
}