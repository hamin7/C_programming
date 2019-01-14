#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
	int *p_student;
	int n = 0;
	int sum = 0;
	printf("학생수는?");
	scanf("%d", &n);

	int score[100] = { 0 };

	p_student = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		if (p_student != NULL) {
			printf("your score: ");
			scanf("%d", &score[i]);
			sum += score[i];
		}
		else {
			printf("Memory allocation error!");
		}
		printf("총점 : %d \n", sum);
	}
	free(p_student);

	return 0;
}
