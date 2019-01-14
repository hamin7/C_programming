#include <stdio.h>
#include <string.h>
#include <limits.h>


int main() {
	int n = 3;
	int i = 0;
	int sum = 0;

	int *score = (int *)calloc(n, sizeof(int));			// score라는 포인터가 calloc(n=3 * 4바이트)을 가리키도록 해줌.
	int *p = score;

	if (score != NULL) {
		while (1)
		{
			int temp;
			scanf("%d", &temp);			// 점수를 입력받음.
			if (temp < 0) {
				break;			// 입력값이 음수라면 종료.
			}
			if (i >= 0){				// 여기가 의문임 3명 이상일 때가 아니라 그냥 바로 늘려줌.
				score = (int *)realloc(score, (++n) * sizeof(int));
			}
			*(score + i) = temp;			// score[i] = temp;			// temp에 넣어두었던 점수를 score에 저장.
			sum += *(score + i);			// sum += score[i];			// 총점을 누적.
			i++;			// 다음 칸으로 이동.
		}
		free(score);
		printf("학생수는 %d \n", i);
		printf("평균 점수는 : %lf \n", (double)sum / (i));
	}
	else {
		printf("Memory Allocation error! \n");
		exit(1);
	}
	return 0;
}

// 3명 이상일 때가 아니라 그냥 바로 늘려줌.
