#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
	//int a;			// static.
	//int *pa = &a;
	int *pa = (int *) malloc(sizeof(int));		// dynamic.
	long long *pb = (long long *) malloc(sizeof(long long));

	*pa = INT_MAX;
	*pb = LLONG_MAX;
	printf("%d\n", *pa);
	printf("%lld\n", *pb);

	free(pa);
	free(pb);

	return 0;
}
