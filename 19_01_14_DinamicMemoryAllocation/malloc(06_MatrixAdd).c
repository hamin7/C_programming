#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void printArray(int *a, int r, int h);

int main() {
	int r, h;

	printf("어떤 사이즈의 행렬을 만들까요?");
	scanf("%d %d", &r, &h);

	int *a = (int *)calloc(r*h, sizeof(int));
	int *b = (int *)calloc(r*h, sizeof(int));
	int *c = (int *)calloc(r*h, sizeof(int));

	if ((a != NULL) && (b != NULL) && (c != NULL)) {
		srand(time(NULL));
		for (int i = 0; i < r*h; i++) {
			*(a + i) = rand() % 10 + 1;
			*(b + i) = rand() % 10 + 1;
			*(c + i) = *(a + i) + *(b + i);
		}
		printArray(a, r, h);
		printf("\t + \n");
		printArray(b, r, h);
		printf("=========================\n");
		printArray(c, r, h);

		free(a);
		free(b);
		free(c);
	}

	return 0;
}

void printArray(int *a, int r, int h) {
	for (int i = 0; i < h; i++) {
		printf("[");
		for (int j = 0; j < r; j++) {
			printf("%d \t", *(a +(i * r) + j));
		}
		printf("]\n");
	}
}
