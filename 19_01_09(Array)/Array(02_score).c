#include <stdio.h>

int main()
{
	int score[5];
	int total = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &score[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("%d 번째 학생의 점수 : %d \n", i+1, score[i]);
	}
	printf("\n");

	for (int i = 0; i < 5; i++) {
		total += score[i];
	}
	printf("\n");


	printf("총점은 %d \n", total);
	printf("평균은 %.1lf \n", (double)total/5.0);

	return 0;
}
