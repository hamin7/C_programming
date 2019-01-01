#include <stdio.h>     //   전처리

int main() {

	int a = 30;
	int res;

	res = (a > 10) && (a < 20);
	printf("res = %d \n", res);

	res = 10 < a < 20;
	printf("res = %d \n", res);     // 항상 결과가 1이 나올 것ㄴ

	return 0;
}
