#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class factorial
{
public:
	factorial(int a)
	{
		n = a;
	}
	factorial()
	{
		cout << "ÇëÊäÈëÐèÇó½×³Ën=";
		cin >> n;
	}
	void show()
	{
		int f = 1;
		if (n == 0)
		{
			f = 1;
		}
		else
		{
			for (int i = n; i >= 1; i--)
				f = f * i;
		}
		cout << n << "!=" << f << endl;
	}
private:
	int n;
};
int main()
{
	factorial n1;
	n1.show();
	return 0;
}