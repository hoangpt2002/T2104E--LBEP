#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int *a;
	a = (int *)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", a+i);
	}
	
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (*(a+j) > *(a+j+1))
			{
				int tmp = *(a+j);
				*(a+j) = *(a+j+1);
				*(a+j+1) = tmp;
			}
		}
	}
	printf("So lon nhat trong mang la: %d\n", *(a+n-1));
	printf("Mang sau khi da sap sep la:\n");			
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", *(a+i));
	}
	
	int m;
	printf("\nNhap m: ");
	scanf("%d", &m);
	a = (int *)realloc(a, m*sizeof(int));
	for (int i = n; i < n+m; i++)
	{
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", a+i);
	}
	
	for (int i = 0; i < n+m-1; i++)
	{
		for (int j = 0; j < n+m-i-1; j++)
		{
			if (*(a+j) > *(a+j+1))
			{
				int tmp;
				tmp = *(a+j);
				*(a+j) = *(a+j+1);
				*(a+j+1) = tmp;
			}
		}
	}
	printf("So lon nhat trong mang la: %d\n", *(a+n+m-1));
	printf("Mang sau khi da sap sep la:\n");			
	for (int i = 0; i < n+m; i++)
	{
		printf("%d\t", *(a+i));
	}
}
