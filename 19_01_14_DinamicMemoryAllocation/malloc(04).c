#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
	int n = 3;
	int i = 0;
	int sum = 0;

	int *score = (int *)calloc(n, sizeof(int));
	int *p = score;

	if (score != NULL) {
		while (1)
		{
			int temp;
			scanf("%d", &temp);
			if (temp < 0) {
				break;
			}
			else if (temp >= 0){
				int *new_score = (int *)calloc(++n, sizeof(int));
				for (int j = 0; j <= n - 1; j++) {
					*(new_score+j) = *(score + j);			// new_score[j] = score[j]
				}
				free(score);
				score = new_score;
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

// 헷갈렸던 문제!!!
