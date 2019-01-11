#include <stdio.h>
#include <string.h>

int main()
{
	char str[80] = "";
	char str2[80] = "";
	int value = 0;

	for(int i = 0; i < 5; i++) {
		printf("단어입력 : ");
		scanf("%s", &str2);
		strcat(str, str2);
		strcat(str, " ");

		printf("현재까지의 문자열 : %s\n", str);
	}


	return 0;
}
