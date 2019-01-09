#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

int main()
{
	int num;
	srand(time(NULL));
	int max = 0;

	int a[100];

	max = a[0];

	int size = sizeof(a) / sizeof(a[0]);

	for (int i = 0; i < size; i++) {
		num = rand() % 10000 + 1;
		a[i] = num;
		printf("%d \t", a[i]);
		if (a[i] > max) {
			max = a[i];
		}
	}

	printf("\n\n");

	printf("max = %d\n", max); // max = 8



	return 0;
}
