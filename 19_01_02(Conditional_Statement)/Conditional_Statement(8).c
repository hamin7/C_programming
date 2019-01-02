#include <stdio.h>     //   전처리

int main() {

	int a, b, c;
	int max;
	scanf("%d %d %d", &a, &b, &c);

	if ((a > b) && (a > c)) {
		max = a;
	}
	if ((b > a) && (b > c)) {
		max = b;
	}
	if((c>a)&&(c>b))
	{
		max = c;
	}

	printf("가장 큰 수는 %d 입니다", max);
	printf("작업 종료 \n");

	return 0;
}

// 테스트 케이스 3가지 해볼 것
