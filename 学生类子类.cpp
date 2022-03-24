#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class student {
public:
	student()
	{
		cout << "请输入学生学号 姓名 成绩:" << endl;
		cin >> id >> name >> score;
	}
	student(string x, string y, int z)
	{
		id = x;
		name = y;
		score = z;
	}
	void show()
	{
		cout << "学号：" << id << "  姓名：" << name << "  分数：" << score << endl;
	}
	~student()
	{
		cout << "~student" << endl;
	}
protected:
	string id, name;
	int score;
};
class ustudent :public student{
public: 
	ustudent()
	{
		cout << "请输入学生专业：" << endl;
		cin >> profession;
	}
	ustudent(string x, string y, int z, string a) :student(x,  y,  z)
	{
		profession = a;
	}
	void printf()
	{
		student::show();
		cout << "专业：" << profession << endl;
	}
	~ustudent()
	{
		cout << "~ustudent" << endl;
	}
private:
	string profession;
};
int main()
{
	ustudent u1;
	ustudent u2("1001", "张三", 95, "信息");
	u1.printf();
	u2.printf();
	return 0;
}