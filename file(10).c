#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


int main() {
	FILE *fp;
	fp = fopen("score.bin", "wb");


	if ((fp == NULL))  {
		printf("error! \n");
	}
	else {
		int num;
		while (1) {
			scanf("%d", &num);
			if (num < 0) break;
			fwrite(&num,  sizeof(int), 1 ,fp);
		}
		fclose(fp);
	
	}
	return 0;
}
