#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct addr
{
	char name[10];
	int age;
	char phone[20];
};

#define SIZE 5;

int main() {
	int menu;
	int n;

	struct addr frineds[n] = { "00", 00, "00" };

	printf("[친구] 1.입력 2.목록보기 0.종료");
	scanf("%d", &menu);

	if (menu == 1) {

		printf("이름 : ");
		scanf("%s", friends[n].name);
		printf("나이 : ");
		scanf("%d", friends[n].age);
		printf("전화번호 : ");
		gets(friends[n].phone);
		printf("### 입력되었습니다. \n");
		n++;
	}
	else if (menu == 2) {
		printf("========================\n");
		for(int )
		printf("%s /t %d \t %s \n", friends[i].name, friends[n].age, friends[n].phone);
		printf("========================\n");
		printf("총 %d명 \n", n);
	}

	return 0;
}
