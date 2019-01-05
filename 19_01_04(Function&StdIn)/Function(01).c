#include <stdio.h>     //   전처리
#include "op.h"

int main() {

	printf("%d \n", add(20, 10));
	printf("%d \n", sub(20, 10));
	printf("%d \n", mul(20, 10));
	printf("%.2lf \n", div(20, 10));

	return 0;
}
