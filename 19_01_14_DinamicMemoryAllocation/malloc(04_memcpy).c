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
				int *score_new = (int *)calloc(++n, sizeof(int));			// score_new라는 동적 메모리 할당을 새로 만듬.
				memcpy(score_new, score, sizeof(int) * (n - 1));		//  아래 세줄과 같은 기능을 함.
				//for (int j = 0; j < n - 1; j++) {
				//	score_new[j] = score[j];
				//}
				free(score);		// 원래 있던 score 메모리를 지움.
				score = score_new;			// score 포인터가 이제는 score_new 메모리를 가르키도록.
			}
			score[i] = temp;
			sum += score[i];
			i++;
		}
		printf("----------\n");
		printf("학생 수: %d\n", i);
		printf("총점: %d\n", sum);
		return 0;
	}
}
