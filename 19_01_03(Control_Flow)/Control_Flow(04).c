#include <stdio.h>     //   전처리

int main() {
	int n;
	int fac = 1;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		fac *= i;
	}

	printf("%d의 factorial은 %d입니다 \n", n, fac);

	return 0;
}

// Factorial
