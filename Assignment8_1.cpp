#include<stdio.h>

int main()
{
	int n;
	printf("Nhap so phan tu cua mang: ");
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
	int min;
	int minMin = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < x)
		{
			min = a[i];
			if (minMin < min)
			{
				minMin = min;
			}
		}
	}
	printf("So nho hon va gan x nhat la: %d", minMin);
}
