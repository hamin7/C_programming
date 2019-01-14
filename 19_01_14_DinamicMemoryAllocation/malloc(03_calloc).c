#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
	int *p_student;
	int n = 0;
	int sum = 0;
	printf("학생수는?");
	scanf("%d", &n);

	int *score = (int *)calloc(n, sizeof(int));
	int *p = score;

	if (score != NULL) {
		for (int i = 0; i < n; i++) {
			printf("your score: ");
			scanf("%d", &score[i]);  // score + i로 바뀜 컴파일 할때.
			sum += score[i];     // sum += *(score + i);    같은 식이다.   // scanf("%d", p); sum += *p; p++; 포인터 자체 변화 노노 새로운 포인터를 지정.
		}
		printf("총점 : %d \n", sum);
		free(score);
	}
	else {
		printf("Memory allocation error!");
		exit(1);
	}

	return 0;
}
