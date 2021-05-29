#include <stdio.h>

int main()
{
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	int a[n];
	
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("Nhap phan tu thu %d: ", i);
			scanf("%d", &a[i]);	
		}
		else
		{
			int x;
			int dem = 0;
			while (dem == 0)
			{
				printf("Nhap phan tu thu %d: ", i);
				scanf("%d", &x);
				for (int j = i - 1; j >= 0; j--)
				{
					if (x == a[j])
					{
						dem++;
						break;
					}
				}
				if (dem > 0)
				{
					printf("Trong mang da co %d roi. Xin moi nhap lai\n", x);
					dem = 0;
				}
				else
				{
					a[i] = x;
					break;
				}
			}
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		printf("%d  ", a[i]);
	}
}
