#include <stdio.h>

#define SIZE 120

int main()
{
	double b;

	int a[10];

	printf("a의 주소 : %d\n", &a[0]);
	printf("a의 주소 : %x\n", &a[0]);
	printf("a의 주소 : %d\n", &a[1]);
	printf("a의 주소 : %x\n", &a[1]);

	printf("a의 주소의 크기 : %d\n", sizeof(&a[0]));
	printf("a의 주소의 크기 : %d\n", sizeof(&b));

	return 0;
}
