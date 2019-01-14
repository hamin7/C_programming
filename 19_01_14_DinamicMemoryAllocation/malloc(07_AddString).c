#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int main() {
	char input[80];
	char length = 1;
	char *str = (char *)calloc(length, sizeof(char));			// null만 들어가 있는 calloc.

	while (1) {
		printf("문자열 입력 : ");
		scanf("%s", input);
		if (strcmp(input, "end") == 0) {
			break;
		}
		length += strlen(input);
		str = (char *)realloc(str, length);
		strcat(str, input);
	}

	printf("%s\n", str);
	free(str);

	return 0;
}
