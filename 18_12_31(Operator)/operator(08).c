#include <stdio.h>     //   전처리

int main() {

	int a = 30;
	int b = 20;
	int c = 40;
	int res;

	res = (++a, ++b, ++c);        // 대입연산자 보다 컴마 연산자가 우선순위가 낮음.
	printf("res = %d \n", res);

	res = (a > b) ? a : b;
	printf("res = %d \n", res);

	res = (a > b) ? a : -a;
	printf("res = %d \n", res);

	return 0;
}
