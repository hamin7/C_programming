#include <stdio.h>
int main()
{
	int num;
	int sum = 0;
	do {
		printf("약수를 구할 수를 입력하세요 (종료는 0) ");
		scanf("%d", &num);

		if (num > 0) {
			printf("%d의 약수는\n", num);
			for (int i = 1; i <= num; i++)
			{
				if (num%i == 0) {
					printf("%d ", i);
					sum += i;
				}

			}
			printf("입니다.\n");

			printf("약수의 합은 %d \n", sum);

			if (sum == num * 2) {
				printf("%d 는 완전수 입니다. \n", num);
			}
		}
		else if (num < 0) {
			printf("양수를 입력하세요\n");
		}

		return 0;
	} while (num != 0);
}
