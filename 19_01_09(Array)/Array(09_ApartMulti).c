#include<stdio.h>

#define SIZE 120

int main()
{
	int apt[2][3][4] = { 0 };
	int menu;
	int dong, floor, ho;


	do {
		printf("[가구원수 조사]\n");
		printf("원하는 작업을 선택하세요.\n");
		printf("(1. 입력 2. 출력 0. 종료)\n");
		scanf("%d", &menu);

		if (menu == 1) {
			int i, j, k, num;
			printf("동과 층, 호를 입력하세요.\n");
			scanf("%d %d %d", &dong, &floor, &ho);
			i = dong;
			j = floor;
			k = ho;
			printf("가구원수를 입력하세요.\n");
			scanf("%d", &num);
			apt[i - 1][j - 1][k - 1] = num;
		}
		else if (menu == 2) {
			for (int i = 0; i < 2; i++) {
				printf("%d동 \n", i + 1);
				for (int j = 2; j >= 0; j--) {
					printf("%d층 [", j + 1);
					for (int k = 0; k < 4; k++) {
						printf("%d ", apt[i][j][k]);
					}
					printf("]\n");
				}
				printf("\n");
			}

		}
		else if (menu == 0) {
			break;
		}
	} while (menu != 0);

	return 0;
}
