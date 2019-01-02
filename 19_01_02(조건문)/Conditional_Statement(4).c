#include <stdio.h>     //   전처리

int main() {

	int score;
	int toeic;

	printf("필기점수를 입력하세요 : ");
	scanf("%d", &score);

	printf("토익점수를 입력하세요 : ");
	scanf("%d", &toeic);

	if ((score>=80)&&(toeic>=800))
	{

		printf("합격입니다. \n");
	}

	printf("작업 종료 \n");

	return 0;
}
