#include <stdio.h>

int main()
{
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	int a[n];
	
	for (int i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &a[i]);
		for (int j = i; j >= 1; j--)
		{
			if (a[j] <= a[j-1])
			{
				int temp;
				temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;				
			}
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		printf("%d  ", a[i]);
	}
}
