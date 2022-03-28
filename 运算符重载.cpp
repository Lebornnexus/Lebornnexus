#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class complex {
public:
	complex(double x=0, double  y=0)
	{
		real = x;
		image = y;
	}
	void show()
	{
		cout << real << "+" << image << "i" << endl;
	}
	complex operator+(complex& b)
	{
		complex c;
		c.real = real + b.real;
		c.image = image + b.image;
		return c;
	}
	complex operator-(complex& b)
	{
		complex d;
		d.real = real - b.real;
		d.image = image - b.image;
		return d;
	}
	friend complex operator*(complex& a, complex& b);
	friend complex operator/(complex& a, complex& b);
protected:
	double  real, image;
};

complex operator*(complex& a, complex& b)
{
	complex t;
	t.real = a.real * b.real - a.image * b.image;
	t.image = a.image * b.real + a.real * b.image;
	return t;
}

complex operator/(complex& a, complex& b)
{
	complex t;
	t.real = (a.real * b.real + a.image * b.image) / (b.real * b.real + b.image * b.image);
	t.image=(a.image*b.real-a.real*b.image)/ (b.real * b.real + b.image * b.image);
	return t;
}

int main()
{
	complex a(3, 4), b(6, 8), c, d, e, f;
	a.show();
	b.show();
	c = a + b;
	c.show();
	d = a - b;
	d.show();
	e = a * b;
	e.show();
	f = a / b;
	f.show();
	system("pause");
	return 0;
}