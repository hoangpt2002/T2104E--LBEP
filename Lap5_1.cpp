#include <stdio.h>

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			dem++;
		}
	}
	if (dem == 2)
	{
		printf("%d la so nguyen to", n);
	}
	else
	{
		printf("%d khong phai so nguyen to", n);
	}
}
