#include <stdio.h>     //   전처리

int main() {

	int age;

	printf("나이를 입력하세요 : ");
	scanf("%d", &age);

	if ((age>=7)&&(age<=12))
	{
		printf("요금은 %d원입니다. \n", 10000*0.5);
	}
	else if ((age >= 13) && (age <= 18))
	{
		printf("요금은 %d원입니다. \n", 10000*0.7);
	}
	else {
		printf("요금은 %d원입니다. \n", 10000);
	}

	printf("작업 종료 \n");

	return 0;
}

//이거 왜 안됨???
