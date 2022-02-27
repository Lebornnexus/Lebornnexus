#include<stdio.h>
int main()
{
	int x, y;
	x = 1;
	y = 0;
	do
	{
		y = y + x * x;
		x = x + 2;
	} while (x <= 9);
	printf("%d\n",y);
	return 0;
}