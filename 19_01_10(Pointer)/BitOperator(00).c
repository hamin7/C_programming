#include <stdio.h>

int main()
{
	int a = 30;

	printf("%d, %x\n", a, a);
	printf("%d, %x\n", a >> 1, a >> 1);
	printf("%d, %x\n", a << 1, a << 1);

	return 0;
}
