#include <stdio.h>

#define SIZE 120

int main()
{
	int a = 10, b = 20;
	int *pa = &a;

	printf("*pa = %d\n", *pa);
	printf("a = %d, b = %d\n", a, b);
	*pa = 0; // a의 값을 바꿈

	pa = &b;

	*pa = 0; // b의 값을 바꿈

	printf("*pa = %d\n", *pa);
	printf("a = %d, b = %d\n", a, b);

	return 0;
}
