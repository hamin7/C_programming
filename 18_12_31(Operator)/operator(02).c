#include <stdio.h>     //   전처리

int main() {

	double a = 10.0;    //double a = 10;
	int b = 5;
	// int b = 5.0;   // warning
	// int b = (int)5.0;    // no warning
	int c = 2;

	a = (double)5.0 / (double)2.0;
	// 	a = (double)5.0 / 2.0;
	// a = (double)( 5 / 2);
	// a = 5 / 2  output 2.00000

	b = 5 / 2;
	c = a % b;       // warning
	// c = (int) a / b;
	// c = (int) (a / b);

	printf("5.0 / 2.0 = %lf \n", a);
	printf("5 / 2 = %d \n", b);
	printf("5 %% 2 = %d \n", c);       // one % is error,

	return 0;
}
