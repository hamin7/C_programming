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

		while(fgets(name, 80, fp) != NULL){
			fputs(name, fp2);
			score = atoi(name);
	
			n++;
			total += score;
		}
		fprintf(fp2,"-------------------------\n");
		fprintf(fp2, "총 %d 건\n", n);
		fprintf(fp2, "총점 : %d \n" ,total);
		
		fclose(fp);
		fclose(fp2);
	}
	return 0;
}

// #include 뭔가 
