#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

void allocate(short **p, int n);

int main() {
	short *p;
	allocate(&p, 5);		// 포인터의 주소값을 넘겨줌.
	p[1] = 10;

	free(p);

	return 0;
}

void allocate(short **p, int n) {
	*p = (short *)calloc(n, sizeof(short));      // p값 자체를 바꿔야 하기 때문에 문제가 되는것.
	**p = 20;
}
