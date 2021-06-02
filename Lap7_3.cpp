#include <stdio.h>

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &a[i]);
	}
	int x;
	printf("Nhap x: ");
	scanf("%d", &x);
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if(a[i] == x)
		{
			dem++;
		}
	}
	if (dem == 0)
	{
		printf("%d khong co trong mang", x);
	}
	else
	{
		printf("%d co trong mang", x);
	}
}
