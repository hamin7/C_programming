#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num, input, tmp;
int decision(int num, int input);
//void srand(unsigned int seed);

int main()
{
	srand(time(NULL));
	num = rand() % 15 + 1;            // 난수표가 있어서 항상 같은수가 난수로 나옴
	printf(" 숫자를 맞혀보세요! \n");

	while (1) {
		scanf("%d \n", &input);
		if (decision(num, input) == 0)
			break;
	}

	return 0;
}

int decision(int num, int input) {
	if (num < input) {
		printf("%d보다 작습니다 \n", input);
		return 1;
	}
	else if (num == input) {
		printf("정답입니다 \n");
		return 0;
	}
	else if (num > input) {
		printf("%d보다 큽니다 \n", input);
		return -1;
	}
}
