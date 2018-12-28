#include <stdio.h>     //   전처리

int main() {
	int a = 10;
	int b, c;
	double da = 3.5;
	char ch = 'A';

	b = a;
	c = a + 20;
    // ch = 65;

	printf("a = %d \n", a);
	printf("b = %d \n", b);
	printf("c = %d \n", c);
	printf("da = %lf\n", da);
	printf("ch = %d \n", ch);
	printf("ch = %c \n", ch);

	a = 20;

	printf("a = %d \n", a);

	return 0;
}
