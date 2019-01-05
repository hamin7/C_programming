#include <stdio.h>

int fibo(int n);

int main(void) {
	int n;
	int i;

	printf("피보나치 수 입력 : ");
	scanf("%d", &n);

	printf("\n");

	for (i = 0; i < n; i++) {
		printf("%d ", fibo(i));
	}

	printf("\n\n");

	return 0;

}

int fibo(int n) {
	if (n <= 0) {
		return 0;
	}
	else {
		if (n == 1) return 1;
		else
			return fibo(n - 1) + fibo(n - 2);
	}
}
