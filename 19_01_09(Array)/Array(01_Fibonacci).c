#include <stdio.h>

int main()
{
	int fib[20] = { 0, 1 };
	for (int i = 2; i < 20; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (int i = 0; i < 20; i++) {
		printf("%d \n", fib[i]);
	}
	printf("\n");

	return 0;
}
