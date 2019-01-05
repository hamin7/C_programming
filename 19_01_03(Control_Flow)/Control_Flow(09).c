#include <stdio.h>     //   전처리

int main() {
	int n;

	do {
		scanf("%d", &n);

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= i; j++) {
				printf("*");
			}
			printf("\n");
		}
	} while (n > 0);

	return 0;
}

// 3중 중첩
