#include <stdio.h>
#include <string.h>

int main()
{
	char str[50];
	printf("Nhap chuoi ki tu: ");
	scanf("%s", str);
	int a,e,u,o,i,k;
	a = e = u= o = i = k = 0;
	for (int j = 0; j < strlen(str); j++)
	{
		switch (str[j])
		{
			case 'a': a++; break;
			case 'e': e++; break;
			case 'u': u++; break;
			case 'o': o++; break;
			case 'i': i++; break;
			default: k++; break;
		}
	}
	printf("a: %d\n", a);
	printf("e: %d\n", e);
	printf("u: %d\n", u);
	printf("o: %d\n", o);
	printf("i: %d\n", i);
	printf("k: %d\n", k);
}
