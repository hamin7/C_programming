#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


int main() {
	FILE *fp;
	fp = fopen("score.bin", "rb");


	if ((fp == NULL))  {
		printf("error! \n");
	}
	else {
		int num;
		int total = 0;
		while (fread(&num, sizeof(int), 1, fp) != 0) {
			printf("%d\n", num);
			total += num;
		}
		fclose(fp);
	
	}
	return 0;
}
