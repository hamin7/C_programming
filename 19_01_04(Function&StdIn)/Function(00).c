#include <stdio.h>     //   전처리

int add(int a, int b);

int main() {
	int c = add(10, 20);

	printf("%d \n", c);

	return 0;
}

int add(int a, int b) {
	int temp;
	temp = a + b;
	return temp;
}
