#include <stdio.h>
bool ktsoNT(int n)
{
	if (n < 2)
		return false;
	if (n < 4)
		return true;
	for (int i = 2; i < n; i++)
	{
		if (n%i == 0)
		{
			return false;
		}
		return true;
	}
}

int NTafter(int n)
{
	int NTafter;
	for (int i = n + 1;;i++)
	{
		if(ktsoNT(i))
		{
			return i;
		}
	}
}

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int kq = NTafter(n);
	printf("So nguyen to tiep theo cua n la: %d", kq);
}
