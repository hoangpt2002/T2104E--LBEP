#include <stdio.h>

int BCNN(int x, int y)
{
	if((x == 0 && y == 0) || (x == 0 || y == 0))
	{
		return 0; 
	}
	int max;
	if (x > y)
	{
		max = x;
	}
	else
	{
		max = y;
	}
	for(int i = max; i < x*y; i++)
	{
		if(i%x == 0 && i%y == 0)
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
	if(BCNN(a,b) == 0)
	{
		printf("Hai so nay khong co boi chung");
	}
	else
	{
		printf("Boi chung nho nhat cua hai so la: %d", BCNN(a,b));
	}
}
