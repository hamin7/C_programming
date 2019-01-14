#include <stdio.h>
#include <string.h>
#include <limits.h>


int main() {
	int n = 0;
	int sum = 0;
	;

	printf("학생 수는?");

	scanf("%d", &n);

	int *score = (int *)malloc(sizeof(int)*n);

	if (score != NULL) {
		for (int i = 0; i < n; i++) {
			printf("your score :");
			scanf("%d", &score[i]);
			sum += score[i];
		}
	}
	else {
		printf("Memory Allocation error! \n");
		exit(1);
	}



	printf("평균 점수는 : %lf", (double)sum / n);

	return 0;
}
