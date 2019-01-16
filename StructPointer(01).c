#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int kor;
	int eng;
	int math;
	char name[10];
} SCORE;

void printList(SCORE *list, int n);
#define SIZE 3

void main() {
	int menu = 1;
	int n = 0, m =0;

	SCORE *list = (SCORE *)calloc(n + 1, sizeof(SCORE));

	while (1) {
		printf("[성적관리] 1.입력 2.출력 0.종료");
		scanf("%d", &menu);

		if (menu == 0) {
			break;
		}

		if (menu == 1) {

				printf("이름 : ");
				scanf("%s", list[n].name);

				printf("성적(국어 영어 수학)");
				scanf("%d %d %d", &list[n].kor, &list[n].eng, &list[n].math);

				printf("### 입력되었습니다. \n");
				n++;
				list = (SCORE *)realloc(list, (n + 1) * sizeof(SCORE));

		}
		else if (menu == 2) {
			printList(list, n);
		}
		free(list);
	}
}

void printList(SCORE *list, int n) {
	printf("========================\n");
	for (int i = 0; i < n; i++)
		printf("%s /t %d \t %s \n", list->name, list->kor, list->eng, (*list).math);		//list[i].eng 이건 안됨.왜냐하면 list++해주기 때문.
	list++;
	printf("========================\n");
	printf("총 %d명 \n", n);
}
