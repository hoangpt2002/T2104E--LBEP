#include <stdio.h>

bool timX(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if(a[i] == x)
		{
			dem++;
			break;
		}
	}
	if (dem == 0)
		return false;
	else
		return true;
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
	int x;
	printf("Nhap x: ");
	scanf("%d", &x);
	if(timX(a,n,x) == true)
	{
		printf("%d nam trong mang", x);
	}
	else
	{
		printf("%d khong nam trong mang", x);
	}
} 
