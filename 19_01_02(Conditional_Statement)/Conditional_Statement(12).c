#include <stdio.h>     //   전처리

int main() {

	int score;
	char grade;
	printf("점수를 입력하시오 : \n");
	scanf("%d", &score);

	if (score >= 90) {
		grade = 'A';
	}
	else if (score >= 80) {
		grade = 'B';
	}
	else if (score >= 70) {
		grade = 'C';
	}
	else if (score >= 60) {
		grade = 'D';
	}
	else if (score >= 50) {
		grade = 'E';
	}
	else {
		grade = 'F';
	}

	printf("당신의 점수는 %d점, 학점은 %c 입니다", score, grade);
	return 0;
}
