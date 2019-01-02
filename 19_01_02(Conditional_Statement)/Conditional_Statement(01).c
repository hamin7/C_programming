#include <stdio.h>     //   전처리

int main() {

	int data;
	printf("아무수나 입력하세요 \n");
	scanf("%d", &data);

	if (data > 3)
	{
		printf("data는 3보다 큰 값입니다. \n");
	}

	printf("작업 종료 \n");

	return 0;
}
