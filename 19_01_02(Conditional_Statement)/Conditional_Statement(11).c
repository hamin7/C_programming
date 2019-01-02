#include <stdio.h>     //   전처리

int main() {

	int score;
	char grade;
	printf("점수를 입력하시오 : \n");
	scanf("%d", &score);

	if(score >= 90){
		grade = 'A';
	}
	if((score >= 80) && (score < 90)){
		grade = 'B';
	}
	if((score >= 70) && (score < 80)){
		grade = 'C';
	}
	if((score >= 60) && (score < 70)){
		grade = 'D';
	}
	if((score >= 50) && (score < 60)){
		grade = 'E';
	}
	if(score < 50){
		grade = 'F';
	}

	printf("당신의 점수는 %d점, 학점은 %c 입니다", score, grade);
	return 0;
}
