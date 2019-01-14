#include <stdio.h>
#include <string.h>
#include <limits.h>


int main() {
	int n = 0;
	int sum = 0;

	printf("학생 수는?");

	scanf("%d", &n);

	int *score = (int *)calloc(n, sizeof(int));
	int *p = score;

	if (score != NULL) {
		for (int i = 0; i < n; i++) {
			printf("your score :");
			scanf("%d", &score[i]);			// 컴파일 시 score + i로 바뀜
			sum += score[i];			// sum += *(score+i); 와 같은 식이다.
			//scanf("%d", p);
			//sum += *p;
			//p++;			// 포인터 자체 변화 노노 새로운 포인터를 지정.
		}
	}
	else {
		printf("Memory Allocation error! \n");
		exit(1);
	}
	free(score);
	printf("평균 점수는 : %lf", (double)sum / n);

	return 0;
}
