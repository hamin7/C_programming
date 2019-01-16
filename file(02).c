#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	FILE *fp; 
	fp = fopen("a.txt", "wt");
	if (fp == NULL) {
		printf("error! \n");
	}
	else {
		fprintf(fp, "Hello\n");
		fprintf(fp, "%d + %d = %d\n", 10, 20, 10 + 20);
		
		fclose(fp);
	}

	return 0;
}
