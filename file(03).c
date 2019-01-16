#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	FILE *fp;
	fp = fopen("a.txt", "rt");
	if (fp == NULL) {
		printf("error! \n");
	}
	else {
		int a, b, c;
		fscanf(fp, "%d %d %d", &a, &b, &c);
		fprintf("%d %d %d \n", a, b, c);
		fscanf(fp, "%d %d %d", &a, &b, &c);
		fprintf("%d %d %d \n", a, b, c);
		
		fclose(fp);
	}

	return 0;
}
