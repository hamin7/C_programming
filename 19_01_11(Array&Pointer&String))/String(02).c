#include <stdio.h>
#include <string.h>

void my_gets(char *str)

int main()
{
	char str[20] = "11111111111111111111";

	printf("카드번호를 입력하세요 : \n");

	my_gets(str);


	char *p = &str[8];
	for (int i = 0; i < 4; i++) {
		*(p++) = '*';
	}

	p = str;
	int i = 0;
	while (*p) {
		if (i > 0 && i % 4 == 0) {
			printf("-");
		}
		printf("%c", *(p++));
		i++;
	}
	return 0;
}

void my_gets(char *str){
	for (int i = 0; i < 16; i++) {
		str[i] = getchar();
	}
}
