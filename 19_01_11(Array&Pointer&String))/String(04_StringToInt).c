#include <stdio.h>
#include <string.h>

int main()
{
	char str[80] = "";
	int value = 0;

	printf("아무수나 입력하시오");
	gets(str);

	char *p = str;

	while (*p) {
		if (*p >= '0' && *p <= '9') {
			value *= 10;
			value += *p - '0';
		}
		p++;
	}

	value++;
	printf("%d\n", value);

	return 0;
}
