#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define ROW_SIZE 12
#define COL_SIZE 10

// 2~120������ �Ҽ� ���ϱ�
// "�����佺�׳׽��� ü" ������� 2���� �迭�� ����
// (1�������� ������ ���� 2���� �������� ��ȯ�ϰ�, 2������ ��ġ �����ͷ� 1���� ��ġ�� ã�� �Ʒ�) 
int main() {
	int prime[ROW_SIZE][COL_SIZE];

	for (int i = 0; i < ROW_SIZE; i++) {
		for (int j = 0; j < COL_SIZE; j++) {
			prime[i][j] = i * COL_SIZE + j + 1;		// 1~120�� ����
		}
	}

	for (int i = 0; i < ROW_SIZE; i++) {
		for (int j = 0; j < COL_SIZE; j++) {
			if (prime[i][j] < 2) continue;	// 1�� �����ϰ� 2���� ����
			if (prime[i][j] > 0) {
				// ����� ���� 0�� �ƴϸ� �Ҽ�
				printf("prime[%d][%d] = %d\n", i, j, prime[i][j]);
				// �Ҽ��� �������� �� ���� ��� ����� ����
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