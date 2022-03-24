#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
const double PI = 3.14;
class Circle {
public:
	Circle()
	{
		cout << "r=";
		cin >> r;
	}
	void showarea()
	{
		cout << "s=" << PI * r * r << endl;
	}
private:
	double r;
};
int main()
{
	Circle c;
	c.showarea();
	system("pause");
	return 0;
}