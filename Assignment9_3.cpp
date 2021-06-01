#include <stdio.h>

int UCLN(int x, int y)
{
	if(x == 0 && y == 0)
	{
		return 0; 
	}
	if(x == 0 || y == 0)
	{
		return x + y;
	}
	int min;
	if (x < y)
	{
		min = x;
	}
	else
	{
		min = y;
	}
	for(int i = min; i > 0; i--)
	{
		if(x%i == 0 && y%i == 0)
		{
			return i;
		}
	}
}

int main()
{
	int a,b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	if (UCLN(a,b) == 0)
	{
		printf("Uoc chung lon nhat cua %d va %d la: vo cuc",a,b);	
	} 
	else
	{
		printf("Uoc chung lon nhat cua hai so la: %d", UCLN(a,b));
	}
}
