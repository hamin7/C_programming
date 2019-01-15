#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct addr
{
	char name[10];
	int age;
	char phone[20];
};

#define SIZE 5

int main() {
	int menu;
	int n;

	struct addr frineds[SIZE];
	struct addr *ps = frineds;
	while (1) {
		printf("[친구] 1.입력 2.목록보기 0.종료");
		scanf("%d", &menu);

		if (menu == 1) {
			if (n >= SIZE) continue;
			printf("이름 : ");
			scanf("%s", ps->name);
			printf("나이 : ");
			scanf("%d", ps->age);
			printf("전화번호 : ");
			gets(ps->phone);
			printf("### 입력되었습니다. \n");
			n++;
			ps++;
		}
		else if (menu == 2) {
			printf("========================\n");
			for (int i =; i < n; i++)
				printf("%s /t %d \t %s \n", friends[i].name, friends[n].age, friends[n].phone);
			printf("========================\n");
			printf("총 %d명 \n", n);
		}
	}


	return 0;
}

// 기말고사 실습 5문제 개인노트북 못씀. 미리체크해둘것.
// c 소스만 보내면 됨
// 전범위.
// 
