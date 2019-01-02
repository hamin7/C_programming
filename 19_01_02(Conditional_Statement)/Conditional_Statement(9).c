#include <stdio.h>     //   전처리

int main() {

	int a, b, c;
	int max;
	scanf("%d %d %d", &a, &b, &c);

	max = (a>b) ? a:b;
	max = (c > max) ? c : max;

	if (a>b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	if(c>max)
	{
		max = c;
	}

	printf("최대값 : %d", max);

	return 0;
}

// 테스트 케이스 3가지 해볼 것
