#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct vector add(struct vector a, struct vector b);

struct vector
{
	int v1;
	int v2;
};

int main() {
	struct vector a = { 13, 90 };
	struct vector b = { 20, 50 };
	struct vector c = add(a, b);

	printf("%d %d \n", c.v1, c.v2);

	return 0;
}

struct vector add(struct vector a, struct vector b) {
	struct vector c = {a.v1 + b.v1, a.v2 + b.v2};
	return c;
}
