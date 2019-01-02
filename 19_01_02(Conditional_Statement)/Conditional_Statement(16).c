#include <stdio.h>     //   전처리

int main() {

	int year, month;
	int res;
	printf("연도와 월을 입력하세요 : ");
	scanf("%d %d ", &year, &month);

	res = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);
	res ? 1 : 0;     // 1이면 윤년

	if (res == 1)
	{
		switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("%d월의 마지막 날은 %d일 입니다", month, 31);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("%d월의 마지막 날은 %d일 입니다", month, 30);
			break;
		default:
			printf("%d월의 마지막 날은 %d일 입니다", month, 29);
		}
	}
	else if (res == 0)
	{
		switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("%d월의 마지막 날은 %d일 입니다", month, 31);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("%d월의 마지막 날은 %d일 입니다", month, 30);
			break;
		default:
			printf("%d월의 마지막 날은 %d일 입니다", month, 28);
		}
	}

	return 0;
}

// 고칠것
// 자동완셩 단축키 tab
