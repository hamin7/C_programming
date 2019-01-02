#include <stdio.h>     //   전처리

int main() {

	int a, b;
	int min;
	scanf("%d %d", &a, &b);

	min = (a < b) ? a : b;
	printf("%d, %d 중 작은 수는 %d입니다. \n", a, b, min);
	printf("작업 종료 \n");

	return 0;
}

// scanf에 & 안붙이면??
