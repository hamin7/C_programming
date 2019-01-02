#include <stdio.h>     //   전처리

void main() {

	int data;
	printf("나이를 입력하세요 \n");
	scanf("%d \n", &data);

	if (data < 18)
	{
		printf("청소년 관람불가. \n");
	}

	printf("작업 종료 \n");

}
