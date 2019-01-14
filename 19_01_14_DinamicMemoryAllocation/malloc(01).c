#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
	char *p_name;
	p_name = (char *)malloc(32);

	if (p_name != NULL) {      // 반드시 동적 할당 후에는 메모리 있는지 확인해야 함.
		printf("your name: ");
		gets(p_name);
		printf("Hi~ %s\n", p_name);
		free(p_name);
	}
	else {
		printf("Memory allocation error!");
	}
	return 0;
}
