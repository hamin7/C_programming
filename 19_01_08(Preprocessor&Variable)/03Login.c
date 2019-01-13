#include <stdio.h>
#define CORRECT_ID 1
#define CORRECT_PW 2

int login(int id, int pw);

int main()
{
	int id, pw;

	do {
		printf("Do login \nid : \n");
		scanf("%d", &id);
		printf("pw : \n");
		scanf("%d", &pw);
	} while (login(id,pw));

	return 0;
}

int login(int id, int pw) {
	static int times = 3;

	if (id == CORRECT_ID && pw == CORRECT_PW) {
		printf("succeed\n");
		return 0;
	}
	else {
		printf("failed\n");
		printf("you have %d times \n", --times);
	}
	return times;

}
