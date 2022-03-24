#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class Complex
{
public:
	Complex(double x = 0, double y = 0)
	{
		a = x; b = y;
	}
	double geta()
	{
		return a;
	}
	double getb()
	{
		return b;
	}
	void show()
	{
		cout << "(" << a << "," << b << ")" << endl;
	}
	double mod()
	{
		return sqrt ( a * a + b * b);
	}
private:
	double a, b;
};
Complex add(Complex& c1, Complex& c2)
{
	Complex c(c1.geta() + c2.geta(), c1.getb() + c2.getb());
	return c;
}
int main()
{
	Complex c1(3, 4), c2(1, 2), c3;
	c1.show();
	c2.show();
	c3 = add(c1, c2);
	c3.show();
	system("pause");
	return 0;
}