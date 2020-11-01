#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int i = 0;
	char str[1000];
	scanf("%[^\n]", str);
	for (int i = 0; i < strlen(str); i++)
	{
		
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))

		{
			printf("%c", str[i]);
		}
	}

}