#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int main() {
	int n = 3, i = 0;
	int sum = 0;

	int *score = (int *)calloc(n, sizeof(int));			// score라는 포인터가 calloc(n=3 * 4바이트)을 가리키도록 해줌.

	if (score != NULL) {
		while (1) {
			int temp;
			scanf("%d", &temp);			// 점수를 입력받음.
			if (temp < 0) {
				break;			// 입력값이 음수라면 종료.
			}
			if (i >= 0) {
				score = (int *)realloc(score, sizeof(int) * ++n);
			}
			score[i] = temp;			// temp에 넣어 두었던 점수를 score에 저장.
			sum += score[i];			// 총점을 누적.
			i++;			// 다음칸으로 이동.
		}
		printf("----------\n");
		for (int j = 0; j < i; j++) {
			printf("%d\n", score[j]);
		}
		printf("학생 수: %d\n", i);
		printf("총점: %d\n", sum);
		return 0;
	}
}
