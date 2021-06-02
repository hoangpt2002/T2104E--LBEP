#include<stdio.h>

int soDaoNguoc(int n)
{
	int tmp;
    int res = 0;
    while(n != 0)
	{
        tmp = n % 10;
        res = res * 10 + tmp;
        n = n / 10;
	}
	return res; 
}

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("So dao nguoc la: %d", soDaoNguoc(n)); 
}
