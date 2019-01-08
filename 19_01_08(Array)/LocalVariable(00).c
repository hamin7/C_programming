#include <stdio.h>

int add(int a, int b);

int main() {
	int a = 10;
	int b = 20;
	{
		int c = add(a, b);
		int a, b;
		c = add(a, b);
	}


	printf("%d + %d = %d \n", a, b, c);

	return 0;
}

int add(int a, int b) {
	int c;
	c = a + b;
	return c;
}
