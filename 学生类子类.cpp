#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class student {
public:
	student()
	{
		cout << "������ѧ��ѧ�� ���� �ɼ�:" << endl;
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
		cout << "ѧ�ţ�" << id << "  ������" << name << "  ������" << score << endl;
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
		cout << "������ѧ��רҵ��" << endl;
		cin >> profession;
	}
	ustudent(string x, string y, int z, string a) :student(x,  y,  z)
	{
		profession = a;
	}
	void printf()
	{
		student::show();
		cout << "רҵ��" << profession << endl;
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
	ustudent u2("1001", "����", 95, "��Ϣ");
	u1.printf();
	u2.printf();
	return 0;
}