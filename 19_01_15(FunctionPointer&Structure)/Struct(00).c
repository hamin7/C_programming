#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct date
{
	int year;
	int month;
	int date;
};

struct account {
	struct date open;
	char name[10];
	int actnum;
	double balance;
};

int main() {
	struct account a = { {2019, 01, 15},"hamin", 1001, 300000 };
	printf("%d, %d \n", sizeof(a), sizeof(struct account));


	printf("%s\n", a.name);

	printf("개설일 : %d-%d-%d\n", a.open.year, a.open.month, a.open.date);
	a.actnum = 2000;

	printf("%d\n", a.actnum);

	return 0;
}
