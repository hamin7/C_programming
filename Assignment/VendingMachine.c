#include <stdio.h>

int Change(int balance);     // 잔돈 반환 함수 선언.
int BuyItem(int select, int balance);
int temp;

int main()
{
	int select;      // 음료 선택.
	char drink;      // 고른 음료의 이름.
	int balance = 0;     // 잔액.
	int cost = 0;      // 지불 해야할 금액(구매액).

	while (1)       // 무한반복
	{
		printf("원하시는 메뉴를 선택하세요. \n(잔액 : %d원) \n", balance);
		printf("1. 커피 800원 \n2. 생수 500원 \n3. 주스 1200원\n4. 콜라 700원\n5. 1000원 투입\n6. 잔돈 반환\n0. 종료 \n");
		scanf("%d", &select);
		balance = BuyItem(select, balance);
		if (balance == -1) {
			printf("잔액이 부족합니다 \n\n");
			balance = temp;
		}
	}
}

int BuyItem(int select, int balance)
{
	int cost = 0;
	switch (select)
	{
	case 1:
		cost = 800;
		if (balance < cost)
		{
			temp = balance;
			return -1;
		}
		else
		{
			printf("커피를 구매하셨습니다. \n\n");
			balance -= cost;
		}
		return balance;
	case 2:
		cost = 500;
		if (balance < cost)
		{
			temp = balance;
			return -1;
		}
		else
		{
			printf("생수를 구매하셨습니다. \n\n");
			balance -= cost;
		}
		return balance;
	case 3:
		cost = 1200;
		if (balance < cost)
		{
			temp = balance;
			return -1;
		}
		else
		{
			printf("쥬스를 구매하셨습니다. \n\n");
			balance -= cost;
		}
		return balance;
	case 4:
		cost = 700;
		if (balance < cost)
		{
			temp = balance;
			return -1;
		}
		else
		{
			printf("콜라를 구매하셨습니다. \n\n");
			balance -= cost;
		}
		return balance;
	case 5:
		balance += 1000;
		printf("1000원이 투입되었습니다. \n\n");
		return balance;
	case 6:
		balance = Change(balance);
		return balance;
	case 0:
		goto end;
	}
end:
	printf("이용해 주셔서 감사합니다. \n");
	return 0;
}

int Change(int balance)     // 잔돈 반환 함수 정의.
{
	printf("반환금 %d원 \n", balance);
	printf("1000원권 %d개\n", balance / 1000);
	printf("500원권 %d개\n", (balance % 1000) / 500);
	printf("100원권 %d개\n\n", ((balance % 1000) % 500) / 100);
	return 0;
}
