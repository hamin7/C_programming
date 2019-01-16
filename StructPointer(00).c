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

int main() {
	int menu;
	int n;

	SCORE st1[SIZE];
	SCORE *ps = st1;
	while (1) {
		printf("[성적관리] 1.입력 2.출력 0.종료");
		scanf("%d", &menu);

		if (menu == 1) {
			if (n < SIZE) continue;

			printf("이름 : ");
			scanf("%s", st1[n].name);

			printf("성적(국어 영어 수학)");
			scanf("%d %d %dd", st1[n].kor, st1[n].eng, st1[n].math);

			printf("### 입력되었습니다. \n");
			n++;
			ps++;
		}
		else if (menu == 2) {
			printList(st1, n);
		}
	}
	return 0;
}

void printList(SCORE *list, int n) {
	printf("========================\n");
	for (int i = 0; i < n; i++)
		printf("%s /t %d \t %s \n", list->name, list->kor, list->eng, (*list).math);		//list[i].eng 이건 안됨.왜냐하면 list++해주기 때문.
	list++;
	printf("========================\n");
	printf("총 %d명 \n", n);
}
