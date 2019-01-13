#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

int main()
{


	while (1) {
		double max = -1;
		double min = 100;
		int max_index = 0, min_index = 0;
		double dif = 0;
		int sel;
		double arr[5];
		double score = 0;

		printf("난이도를 입력하세요 : ");
		scanf("%.1lf", &dif);
		printf("\n");

		for (int i = 0 ; i < 5; i++) {
			printf("%d번 채점관 점수 : ", i+1);
			scanf("%lf", &arr[i]);
			if (arr[i] > max) {
				max = arr[i];
				max_index = i;
			}
			if (arr[i] < min) {
				min = arr[i];
				min_index = i;
			}
			score += arr[i];
			printf("\n");
		}
		printf("결과\n");
		printf("================================\n");
		for (int i = 0; i < 5; i++) {
			printf("%.1lf ", arr[i]);
			if (i == max_index) {
				printf("(M)");
			}
			if (i == min_index) {
				printf("(m)");
			}
			printf("\t");
		}
		printf("\n");
		printf("================================\n");

		score = (score - arr[min_index] - arr[max_index]) * dif;

		printf("Score : %.1lf\n", score*dif);

		printf("계속하시겠습니까? (1:계속/2:중지)\n");
		scanf("%d", &sel);
		if (sel == 1) {
			continue;
		}
		else if (sel == 2) {
			break;
		}
	}
	return 0;
}

// 이거 오류남
