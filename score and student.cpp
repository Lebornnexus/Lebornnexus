#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class score {
public:
	score()
	{
		cout << "������ѧ������ ��ѧ Ӣ��ɼ�" << endl;
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
		cout << "����:" << chinese << endl;
		cout << "��ѧ:" << math << endl;
		cout << "Ӣ��:" << english<< endl;
	}
	~score()
	{
		cout << "�ɼ������" << endl;
	}
private:
	double chinese, math, english;
	
};
class student {
public:
	student()
	{
		cout << "������ѧ����ѧ�� ������" << endl;
		cin >> id >> name;
	}
	void show()
	{
		cout <<"ѧ�ţ�" << id<<endl;
		cout <<"������" << name<<endl;
		s.show();
	}
	~student()
	{
		cout << "�����Ϣ�����" << endl;
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