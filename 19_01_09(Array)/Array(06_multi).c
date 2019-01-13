#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

int main()
{
	int menu = 1;

	srand(time(NULL));
	int A[2][2], B[2][2], C[2][2];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			A[i][j] = ((rand() % 10) + 1);
			B[i][j] = ((rand() % 10) + 1);
		}
	}

	for (int i = 0; i < 2; i++) {
		printf("A[%d   %d]\n", A[i][0], A[i][1]);
	}
	printf("\n");
	for (int i = 0; i < 2; i++) {
		printf("B[%d   %d]\n", B[i][0], B[i][1]);
	}
	printf("\n");

	do {
		int menu;
		printf("원하는 연산은? \n1.덧셈\n2.뺄셈\n3.곱셈\n0.종료\n");
		scanf("%d", &menu);
		if (menu == 1) {
			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 2; j++) {
					C[i][j] = A[i][j] + B[i][j];
				}
			}
		}
		else if (menu == 2) {

		}
		else if (menu == 3) {

		}
		else if (menu == 0) {
			break;
		}
		printf("=======================\n");
		for (int i = 0; i < 2; i++) {
			printf("C[%d   %d]\n", C[i][0], C[i][1]);
		}
		printf("\n");

	} while (menu != 0);

	return 0;
}


// 뺄셈이랑 곱셈은 노가다라서 구현 안함
