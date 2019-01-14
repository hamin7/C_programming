#include <stdio.h>
#include <string.h>
#include <limits.h>


int main() {
	int n = 0;
	int sum = 0;

	printf("학생 수는?");
	scanf("%d", &n);

	int score[100] = { 0 };


	for (int i = 0; i < n; i++) {
		scanf("%d", &score[i]);
		sum += score[i];
	}

	printf("평균 점수는 : %lf", (double)sum / n);

	return 0;
}
