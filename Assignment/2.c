#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[80];
	char temp[80];
	
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str);
	
	for (int i = 0; i < strlen(str); i++) {
		temp[i] = str[strlen(str) - (i+1)];	
	}

	if (!strncmp(str, temp, strlen(str))) {
		printf("%s��(��) ȸ���Դϴ�. \n", str);
	}
	else
	{
		printf("%s��(��) ȸ���� �ƴմϴ�. \n", str);
	}
	return 0;
}

