#include <stdio.h>     //   전처리

int main() {

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			if (j <= 5 - i) {
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}

/*
#include <stdio.h>     //   전처리

int main() {

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5 - i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/
