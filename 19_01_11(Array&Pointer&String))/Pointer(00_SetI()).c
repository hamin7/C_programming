#include <stdio.h>

void setI(const int *p);

int main()
{
	int i;
	int *p = &i;
	*p = 10;

	printf("%d \n", i);

	setI(&i);

	printf("%d \n", i);

	return 0;
}

void setI(int * const p) {
	*p = 20;
}
