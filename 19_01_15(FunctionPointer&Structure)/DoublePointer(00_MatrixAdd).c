// 복습하기.
// strcpy(str, "abc");
// 메모리의 끝에 꼭 null있어야 함. +1 해줘야.
// 이중 포인터 써야하는 경우.
// 함수 내에서 다른 포인터 값을 변경하고 싶을 때.
// 이차원 배열 동적할당 하고 싶을때.

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void printArray(int **a, int x, int y);

int main() {

	int **a, **b, **c, x, y;

	srand(time(NULL));
	printf("어떤 사이즈의 행렬을 만들까요?");
	scanf("%d %d", &x, &y);

	a = (int **)malloc(sizeof(int *) * y);
	b = (int **)malloc(sizeof(int *) * y);
	c = (int **)malloc(sizeof(int *) * y);

	for (int i = 0; i < y; i++){
		a[i] = (int *)malloc(sizeof(int) * x);
		b[i] = (int *)malloc(sizeof(int) * x);
		c[i] = (int *)malloc(sizeof(int) * x);
		for (int j = 0; j < x; j++) {
			a[i][j] = rand() % 10 + 1;
			b[i][j] = rand() % 10 + 1;
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	printArray(a, x, y);
	printf("\t+\n");
	printArray(b, x, y);
	printf("=============\n");
	printArray(c, x, y);

	for (int i = 0; i < y; i++) {
		free(a[i]);
		free(b[i]);
		free(c[i]);
	}
	free(a);
	free(b);
	free(c);
	return 0;
}

void printArray(int **a, int x, int y) {
	for (int i = 0; i < y; i++) {
		printf("[");
		for (int j = 0; j < x; j++) {
			printf("%d \t", a[i][j]);
		}
		printf("]\n");
	}
}
