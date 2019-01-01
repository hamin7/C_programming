#include <stdio.h>     //   전처리

int main() {

	double a = 10.0;    //double a = 10;
	int b = 5;
	int c = 2;

	a = 5.0 / 2.0;       // a = 5 / 2  output 2.00000
	b = 5 / 2;
	c = 5 % 2;

	printf("5.0 / 2.0 = %lf \n", a);
	printf("5 / 2 = %d \n", b);
	printf("5 %% 2 = %d \n", c);       // one % is error,

	return 0;
}


버림, 반올림 조심
