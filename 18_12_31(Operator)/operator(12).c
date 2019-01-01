#include <stdio.h>     //   전처리

int main() {

	int korean;
	int english;
	int math;
	int total;
	double average;

	printf("국어 : ");
	scanf("%d", &korean);

	printf("영어 : ");
	scanf("%d", &english);

	printf("수학 : ");
	scanf("%d", &math);

	total = (korean + english + math);
	printf("총점 : %d \n", total);

	average = total / 3.0;              // 묵시적 형변환!
	printf("평균 : %.1lf \n", average);

	return 0;
}
