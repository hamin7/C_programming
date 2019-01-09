#include<stdio.h>

#define SIZE 120

int main()
{
	int prime[12][10];
	int i;

	for (i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			prime[i][j] = i * 10 + j + 1;
		}
	}

	for (i = 1; i < SIZE; i++) {
		for (int j = 0; j < 10; j++) {
			if (prime[i][j] > 1) {
				printf("%d\t", prime[i][j]);
				int num = prime[i][j] * prime[i][j];
				while (num <= SIZE) {
					prime[num / 10][num % 10] = 0;
					num += prime[i][j];
				}
			}
		}
	}

	return 0;
}


// 이거 다시해야함 오류남
