#include <stdio.h>
#include <string.h>

int main()
{
	char str[80] = "abc";
	char str2[80];

	strcpy(str2, str);
	printf("%s \n", str2);

	strcat(str2, "def");
	printf("%s \n", str2);

	return 0;
}
