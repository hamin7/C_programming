#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *my_alloc(int n);

int main() {
	int n;

	while (1) {
		printf("n = ? \n");
		scanf("%d", &n);
		if (n == 0) break;
		int *p = my_alloc(n);

		for (int i = 0; i < n; n++) {
			printf("%d \t", p[i]);
		}
		printf("\n");
		free(p);

	}
	return 0;
}

int *my_alloc(int n) {
	int *p = (int *)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		p[i] = i + 1;
		return *p;
	}
}
