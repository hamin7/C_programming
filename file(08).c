#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


int main() {
	FILE *fp;
	fp = fopen("score.txt", "rt");
	FILE *fp2 = fopen("output.txt", "wt");

	if ((fp == NULL)||(fp2 == NULL))  {
		printf("error! \n");
	}
	else {
		char name[80];
		int score;
		int total = 0;
		int n = 0;
		int i = 0;

		while((name[i] = fgetc(fp)) != EOF){
			fputc(name[i], fp2);
			if (name[i] == '\n') {
				name[i+1] == NULL;
				
				score = atoi(name);

				n++;
				total += score;
				i = 0;
			}
			else {
				i++;
			}
			
		}
		fprintf(fp2,"-------------------------\n");
		fprintf(fp2, "총 %d 건\n", n);
		fprintf(fp2, "총점 : %d \n" ,total);
		
		fclose(fp);
		fclose(fp2);
	}
	return 0;
}
