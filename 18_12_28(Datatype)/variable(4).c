#include <stdio.h>     //   전처리

int main() {

	int d = 10;
	int o = 010;
	int x = 0x10;

	printf("%d \n", d);
	printf("%d \n", o);
	printf("%o \n", o);
	printf("%#o \n", o);
	printf("%d \n", x);
	printf("%x \n", x);
	printf("%#x \n", x);
	printf("%#X \n", x);

	return 0;
}
