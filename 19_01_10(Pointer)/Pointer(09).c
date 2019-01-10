#include <stdio.h>

int GetData(void *p_data, int len);

int main()
{
	int a[] = { 1,2,3,4,5 };

	int *p = &a[0] + (&a[4] - &a[0]) / 2;

	printf("%d\n", *p);


	return 0;
}
