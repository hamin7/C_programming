#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define ROW_SIZE 12
#define COL_SIZE 10

// 2~120사이의 소수 구하기
// "에라토스테네스의 체" 방식으로 2차원 배열로 구현
// (1차원으로 나열된 수를 2차원 형식으로 변환하고, 2차원의 위치 데이터로 1차원 위치를 찾는 훈련) 
int main() {
	int prime[ROW_SIZE][COL_SIZE];

	for (int i = 0; i < ROW_SIZE; i++) {
		for (int j = 0; j < COL_SIZE; j++) {
			prime[i][j] = i * COL_SIZE + j + 1;		// 1~120을 대입
		}
	}

	for (int i = 0; i < ROW_SIZE; i++) {
		for (int j = 0; j < COL_SIZE; j++) {
			if (prime[i][j] < 2) continue;	// 1을 제외하고 2부터 시작
			if (prime[i][j] > 0) {
				// 저장된 값이 0이 아니면 소수
				printf("prime[%d][%d] = %d\n", i, j, prime[i][j]);
				// 소수의 제곱부터 그 이후 모든 배수를 삭제
				int num = prime[i][j] * prime[i][j];
				while (num <= ROW_SIZE * COL_SIZE) {
					printf("%d ", num);
					prime[(num - 1) / COL_SIZE][(num - 1) % COL_SIZE] = 0;
					num += prime[i][j];
				}
				printf("\n\n");
			}
		}
	}


	return 0;
}