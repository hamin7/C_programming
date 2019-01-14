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
				int *new_score = (int *)calloc(++n, sizeof(int));			// new_score라는 동적 메모리 할당을 새로 만듬.
				memcpy(new_score, score, sizeof(int) * (n - 1));			// 새로운 new_score로 score를 복사해서 붙여넣음.
				free(score);			// 원래있던 score 메모리를 지움.
				score = new_score;			// score 포인터가 이제는 new_score 메모리를 가르키도록.
			}
			*(score + i) = temp;			// score[i] = temp;
			sum += *(score + i);			// sum += score[i];
			i++;
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
