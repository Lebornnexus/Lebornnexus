#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
class point {
public:
	point()
	{
		cout << "请输入点坐标x y:" << endl;
		cin >> x >> y;
	}
	point(int a, int b)
	{
		x = a; y = b;
	}
	void show()
	{
		cout<<"点坐标为" << "(" << x << "," << y << ")" << endl;
	}
	int get1() { return x; }
	int get2() { return y; }
private:
	int x, y;
};
class line {
public:
	line(int a1,int b1,int a2,int b2):p1(a1,b1),p2(a2,b2)
	{}
	void distance()
	{
		int a1, a2;
		double z;
		a1= (p1.get1( )- p2.get1( )) * (p1.get1()- p2.get1());
		a2 = (p1.get2()- p2.get2()) * (p1.get1()- p2.get2());
		z = sqrt(a1 + a2);
		cout << "两点距离为：" << z << endl;
	}
private:
	point p1, p2;
};


int main()
{
	line l2(5, 6, 1, 3);
	l2.distance();
	point p1();
	point p2(3, 4);
	p2.show();
	system("pause");
	return 0;
}