#include <stdio.h>     //   전처리

int main() {

	for (int i = 5; i >= 1; i--) {
		for (int j = i; j >= 1; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
