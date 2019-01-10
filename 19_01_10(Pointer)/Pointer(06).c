#include <stdio.h>

void swap(int *a, int *b);

int main()
{
	int a = 10;
	int b = 20;
	double d = 3.14;

	swap(&a, &b);

	printf("%d, %d\n", &a, &b);

	void *p = &a;
	*(int *)p = 20;
	p = &d;
	*(double *)p = 2.0;

	return 0;
}

void swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
