#include <stdio.h>     //   전처리

int main() {

	int a = 30;
	int res;

	res = (a > 10) && (a++ < 20);
	// res = (a < 10) %% (a++ < 20);      // short circuit rule
	printf("a = %d \n", a);

	return 0;
}
