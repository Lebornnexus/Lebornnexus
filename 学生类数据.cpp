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
		cout << "������ѧ����ѧ�� ���� �ɼ� ��" << endl;
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
	cout << "ѧ����ϢΪ��" << endl;
	for (int i = 0; i < N; i++)
		s[i].show();
	int sum;
	double aver;
	sum = add(s);
	aver = sum * 1.0 / N;
	cout << N << "��ѧ�����ܷ�Ϊ��" << sum << endl;
	cout << N << "��ѧ���ľ���Ϊ��" << aver << endl;
	system("pause");
	return 0;
}