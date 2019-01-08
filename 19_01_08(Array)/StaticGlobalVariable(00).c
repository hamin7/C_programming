#include <stdio.h>

void test();
static int c;

int main() {
	for (int i = 0; i < 5; i++) {
		test();
	}

	return 0;
}

void test() {
	int a = 0;
	printf("%d\n", a++);
}
