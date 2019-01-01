#include <stdio.h>     //   전처리

int main() {

	int a = 10.0;
	int b = 5;
	int c = 2;

	b = a++;

	printf("b = %d \n", b);

	b = ++a;
	printf("b = %d \n", b);

	return 0;
}

컴퓨터는 0빼고 나머지는 모두 참이라고 생각
