#include <stdio.h>     //   전처리

int main() {

	int a;
	double b;

	printf("int형 변수의 크기 : %d \n", sizeof(a));
	printf("double형 변수의 크기 : %d \n", sizeof(b));
	printf("10의 크기 : %d \n", sizeof(10));
	printf("10LL의 크기 : %d \n", sizeof(10LL));
	printf("3.5의 크기 : %d \n", sizeof(3.5));
	printf("3.5F의 크기 : %d \n", sizeof(3.5F));

	printf("10+5의 크기 : %d \n", sizeof(10 + 5));
	printf("10+5.0의 크기 : %d \n", sizeof(10+5.0));

	return 0;
}
