#include <stdio.h>

#define SIZE 120

int main()
{
	int a = 10;
	int *pa = &a;
	int *pb = &a;

	printf("*pa = %d, *pb = %d\n", *pa, *pb);
	printf("a = %d", a);
	*pb = 20;

	printf("a = %d,d\n", a);

	return 0;
}
