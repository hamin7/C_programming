#include <stdio.h>
int main()
{
	int num;
	do {
		printf("약수를 구할 수를 입력하세요 (종료는 0) ");
		scanf("%d", &num);

		if (num > 0) {
			printf("%d의 약수는\n", num);
			for (int i = 1; i <= num; i++)
			{
				if (num%i == 0)
					printf("%d ", i);
			}
			printf("입니다.\n");
		}
		else if (num == 0) {
			return 0;
		}
		else if (num < 0) {
			printf("양수를 입력하세요\n");
		}
		return 0;
	} while (num != 0);
}
