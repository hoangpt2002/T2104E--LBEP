#include <stdio.h>

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int a3;
	int a1 = 1;
	int a2 = 1;
	if(n == 1)
	{
		a3 = 0;
	}
	else
	{
		if (n == 2)
		{
			a3 = 1;
		}
		else
		{
			for(int i = 3;a3 < n - a1;i++)
			{
				a3 = a2 + a1;
				a1 = a2;
				a2 = a3;
			}
		}
	}
	printf("Tiem can duoi %d trong day fibonaci la: %d",n,a3);
}
