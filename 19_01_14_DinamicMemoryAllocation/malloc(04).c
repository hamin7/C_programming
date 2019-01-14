#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
	int n = 3, i = 0;
	int sum = 0;

	int *score = (int *)calloc(n, sizeof(int));

	if (score != NULL) {
		while (1) {
			int temp;
			scanf("%d", &temp);
			if (temp < 0) {
				break;
			}
			if (i >= 0) {
				int *score_new = (int *)calloc(++n, sizeof(int));
				for (int j = 0; j < n - 1; j++) {
					score_new[j] = score[j];
				}
				free(score);
				score = score_new;
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
