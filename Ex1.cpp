#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	if (a+b > c && b+c > a && a+c > b)
	{
		float p, S;
		p = (float)(a+b+c)/2;
		S = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Dien tich tam giac la: %f", S);
	}
	else
	{
		printf("3 canh nhap vao khong phai la 3 canh cua tam giac");
	}
} 
