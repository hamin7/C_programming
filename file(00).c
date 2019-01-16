#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	FILE *fp;
	fp = fopen("C:\\Users\\HY\\Documents\\a.txt", "w");
	if (fp == NULL) {
		printf("error! \n");
	}
	else {
		fclose(fp);
	}

	return 0;
}
