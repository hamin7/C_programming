#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
	FILE *fp;
	fp = fopen("score.txt", "rt");

	if (fp == NULL) {
		printf("error! \n");
	}
	else {
		char name[80];
		int score;
		int total = 0;
		int n = 0;

		while(fscanf(fp, "%s %d", name, &score) != EOF){

			fprintf(fp, "%s %d \n", name, score);
			n++;
			total += score;
		}
		printf("-------------------------\n");
		printf("총 %d 건\n", n);
		printf("총점 : %d \n" ,total);
		fclose(fp);
	}
	return 0;
}
