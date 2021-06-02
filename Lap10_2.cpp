#include <stdio.h>
#include <string.h>
int main()
{
	char str[50];
	printf("Nhap vao chuoi: ");
	scanf("%s",str);
	for(int i = 0; i < strlen(str); i++)
	{
		if(str[i] >= 97 && str[i] <= 122)
		{
			str[i]-=32;
		}
	}
	printf("Chuoi sau khi chuyen doi: %s",str);
}
