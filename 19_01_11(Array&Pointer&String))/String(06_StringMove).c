#include <stdio.h>
#include <string.h>

int main()
{
	char str[80] = "Hello world!";
	char str2[80] = "";
	int value = 0;

	char *p = str;

	for (int i = 0; i < strlen(str); i++)
	{
		printf("%s", p++);
		for (int j = 0; j < i; j++) {
			putchar(str[j]);
		}
		printf("\n");
	}




	return 0;
}
