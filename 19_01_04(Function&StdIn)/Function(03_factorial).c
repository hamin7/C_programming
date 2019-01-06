#include <stdio.h>     //   전처리
int fac(int a);
int fac2(int b);

int main() {
	int n;
	printf("아무수나 입력하세요 \n");
	scanf("%d", &n);
	printf("n! = %d \n", fac(n));
	printf("n! = %d \n", fac2(n));
	return 0;
}

int fac(int a) {
	if (a <= 1) {
		return 1;
	}
	else {
		return a * fac(a - 1);
	}
}

int fac2(int b) {
	int c = 1;
	for (; b > 1; b--) {
		c *= b;
	}
	return c;
}
