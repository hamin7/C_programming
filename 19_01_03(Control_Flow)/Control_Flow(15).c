#include <stdio.h>     //   전처리

int main() {
	int select;
	int a, b, c;

	do {
	start:
		printf("원하는 메뉴를 선택하세요. \n 1. 더하기. \n 2. 빼기. \n 3. 곱하기. \n 4. 나누기. \n 0. 종료. \n \n");

		scanf("%d", &select);

		switch (select) {
		case 1:

			printf("더하기를 선택하셨습니다. \n");
			printf("두 수를 입력하세요 \n");
			scanf("%d %d", &a, &b);
			c = a + b;

			printf("결과는 \n");
			printf("%d + %d = %d \n", a, b, c);
			printf("입니다 \n");

			goto start;
		case 2:

			printf("더하기를 선택하셨습니다. \n");
			printf("두 수를 입력하세요 \n");
			scanf("%d %d", &a, &b);
			c = a + b;

			printf("결과는 \n");
			printf("%d + %d = %d \n", a, b, c);
			printf("입니다 \n");
			goto start;
		case 3:
			goto start;
		case 4:
			goto start;
		case 0:
			break;
		};
	} while (select);



	return 0;
}

// break과 return의 차이
// 함수 선언부가 main 보다 아래있다면?
// 선언부만 위에 있으면 가능?
