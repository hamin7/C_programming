#include <stdio.h>
#define SIZE 5

int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8};

	int size = sizeof(a) / sizeof(a[0]);

	for (int i = 0; i < size; i++) {
		printf("%d \n", a[i]);
	}

	return 0;
}
