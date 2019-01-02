#include <stdio.h>     //   전처리

int main() {

	int month;
	printf("몇월인지 입력하시오 : ");
	scanf("%d", &month);

	switch(month){
			case 3: case 4: case 5:
			printf("봄입니다");
			break;
	case 6: case 7: case 8:
			printf("여름입니다");
			break;
	case 9: case 10: case 11:
			printf("가을입니다");
			break;
  case 12: case 1: case 2:
      printf("봄입니다");
			break;
      default:
			printf("오류");
	}

	return 0;
}

// switch 문이 if else문 보다 성능적으로 더 좋다.
