#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Array {
public:
	Array()
	{
		cout << "������5������" << endl;
		for (int i = 0; i < 5; i++)
		{
			cin >> a[i];
		}
	}
	void sort()
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (a[j] > a[j + 1])
				{
					int t = a[j];
					a[j] = a[j + 1];
					a[j + 1] = t;
				}
			}
		}
	}
	void show()
	{
		for (int i = 0; i <5; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
private:
	int a[5];

};
int main()
{
	Array arr;
	arr.show();
	arr.sort();
	arr.show();
	return 0;
}