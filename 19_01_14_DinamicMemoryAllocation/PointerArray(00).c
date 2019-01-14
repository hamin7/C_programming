#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int main() {
	char *str[3];			//  포인터 배열.
	char input[80];

	for (int i = 0; i < 3; i++) {
		scanf("%s", input);
		str[i] = (char *)calloc(strlen(input) + 1, sizeof(char));
		strcpy(str[i], input);
	}
	for (int i = 0; i < 3; i++){
		printf("%s\n", str[i]);
		free(str[i]);
	}
	return 0;
}
