#include <stdio.h>
#include <string.h>

void upperCase(char s[])
{
	for (int i = 0; i < strlen(s); i++)
	{
		if(s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}
	printf("Chuoi sau khi duoc in hoa la: %s", s);
}

int main()
{
	char s[100];
	printf("Nhap chuoi: ");
	gets(s);
	upperCase(s);
}
