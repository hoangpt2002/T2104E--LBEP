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
	int sum = 0;
	int dem = 0;	
	for (int i = 0; i < n; i++)
	{
		if (a[i]%2 == 1)
		{
			sum += a[i];
			dem++;	
		}
	}
	float tbc = (float)sum/dem;
	printf("Trung binh cong cac so le trong mang la: %f", tbc);
}
