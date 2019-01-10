#include <stdio.h>

int GetData(void *p_data, int len);

int main()
{
	int a = 127;

	printf("%d, %x\n", a, a);
	printf("%d, %x\n", a & 1, a & 1);
	printf("%d, %x\n", a | 1, a | 1);
	printf("%d, %x\n", a ^ 1, a ^ 1);
	printf("%d, %x\n", ~a, ~a);

	return 0;
}
