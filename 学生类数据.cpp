#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cmath>
#include<string>
const int  N = 3;
using namespace std;
class Student
{
public:
	Student()
	{
		cout << "请输入学生的学号 姓名 成绩 ：" << endl;
		cin >> id >> name >> score;
	}
	double gets()
	{
		return score;
	}
	void show()
	{
		cout << id << "\t";
		cout << name << "\t";
		cout << score << endl;
	}
private:
	int id; string name; double score;
};

double add(Student s[N])
{
	double sum = 0;
	for (int i = 0; i < N; i++)
		sum = sum + s[i].gets();
	return sum;
}

int main()
{
	Student s[N];
	cout << "学生信息为：" << endl;
	for (int i = 0; i < N; i++)
		s[i].show();
	int sum;
	double aver;
	sum = add(s);
	aver = sum * 1.0 / N;
	cout << N << "个学生的总分为：" << sum << endl;
	cout << N << "个学生的均分为：" << aver << endl;
	system("pause");
	return 0;
}