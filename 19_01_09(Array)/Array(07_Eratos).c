#include<stdio.h>

#define SIZE 120

int main()
{
	int prime[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
		prime[i] = i + 1;

	for (i = 1; i < SIZE; i++) {
		if (prime[i] > 1) {
			printf("%d\t", prime[i]);
			int num = prime[i] * prime[i];
			while (num <= SIZE) {
				prime[num - 1] = 0;
				num += prime[i];
			}
		}
	}

	return 0;
}
