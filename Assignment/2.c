#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[80];
	char temp[80];
	
	printf("문자열을 입력하세요 : ");
	scanf("%s", str);
	
	for (int i = 0; i < strlen(str); i++) {
		temp[i] = str[strlen(str) - (i+1)];	
	}

	if (!strncmp(str, temp, strlen(str))) {
		printf("%s은(는) 회문입니다. \n", str);
	}
	else
	{
		printf("%s은(는) 회문이 아닙니다. \n", str);
	}
	return 0;
}

