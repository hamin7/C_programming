#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);

	char **str = (char **)calloc(n, sizeof(char *));
	char input[80];

	for (int i = 0; i < n; i++) {
		scanf("%s", input);
		str[i] = (char *)calloc(strlen(input) + 1, sizeof(char));
		strcpy(str[i], input);
	}
	for (int i = 0; i < n; i++){
		printf("%s\n", str[i]);
		free(str[i]);
	}
	free(str);
	return 0;
}
