#include <stdio.h>

#define SIZE 120

void print(int *a);

int main()
{
	int a = 10;
	print("a = %d\n", a);
	print(&a);

	print("a = %d\n", a);      // 직접 참조의 한계.

	return 0;
}

void print(int *a) {
	print("a = %d\n", *a);
	*a = 20;
}
