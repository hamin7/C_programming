#include <stdio.h>

void printBinary(char a);

int main()
{
	char a = 127;

	printBinary(127);

	return 0;
}

void printBinary(char a) {
	for (int i = sizeof(a) * 8 - 1; i >= 0; i--) {
		printf("%d", a >> i & 1);
	}
	printf("\n");
}
