#include <stdio.h>

void inSoLe(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if(a[i]%2 == 1)
		{
			dem++;
		}
	}
	if (dem == 0)
	{
		printf("Mang khong co so le");
	}
	else
	{
		printf("Cac so le trong mang la:\n");
		for (int i = 0; i < n; i++)
		{
			if(a[i]%2 == 1)
			{
				printf("%5d", a[i]);
			}
		}	
	}
	
}
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
	}
	inSoLe(a,n);
}
