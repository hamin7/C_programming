#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

typedef struct
{
	int name;
	int att;
	int mid;
	int final;
} SCORE;

void main() {
	int *fp = open("score.txt", "at");
	if(fp != NULL)
		while (1) {
			SCORE s;
			printf("[이름 출석 중간고사 기말고사]\n");
			scanf("%s %d %d %d", s.name, &s.att, &s.mid, &s.final);
				if (strcmp(s.name, "end") == 0)
					break;
				fprintf(fp, "%s %d %d %.lf\n", s.name, s.att, s.mid*0.4, s.final*0.4);
		}
	fclose(fp);
	return 0;
}
