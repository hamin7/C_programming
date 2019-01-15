#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int v1;
	int v2;
} VECTOR;

typedef struct vector VECTOR;

VECTOR add(VECTOR a, VECTOR b);

int main() {
	VECTOR a = { 13, 90 };
	VECTOR b = { 20, 50 };
	VECTOR c = add(a, b);

	printf("%d %d \n", c.v1, c.v2);

	return 0;
}

VECTOR add(VECTOR a, VECTOR b) {
	VECTOR c = { a.v1 + b.v1, a.v2 + b.v2 };
	return c;
}
