#include <stdio.h>
#define SIZE 5

int main()
{
	int a[SIZE] = { 1, };


	a[0] = 10;
	a[1] = a[0] * 2;
	for (int i = 0; i < SIZE; i++) {
		printf("%d \n", a[i]);
	}

	return 0;
}
