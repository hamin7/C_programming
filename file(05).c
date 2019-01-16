#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
	FILE *fp;
	fp = fopen("score.txt", "wt");

	if (fp == NULL) {
		printf("error! \n");
	}
	else {
		char name[80];
		int score;

		while(1){
			scanf("이름: ");
			scanf("%s", name);
			if (strcmp(name, "end") == 0) {
				break;
			}
			printf("점수 : ");
			scanf("%d", &score);
			fprintf(fp, "%s %d \n", name, score);
		}
	
		
		fclose(fp);
	}

	return 0;
}
