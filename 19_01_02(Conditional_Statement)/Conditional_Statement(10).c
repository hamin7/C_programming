#include <stdio.h>     //   전처리

int main() {

	int year, month, day;
	printf("오늘 년 월 일 입력하시오 \n");
	scanf("%d %d %d", &year, &month, &day);

	if (day == 30)
	{
		if (month == 12)
		{
			year++;
			month = 1;
			day = 1;
		}
		else {
			month++;
			day = 1;
		}
	}
	else {
		day++;
	}

	printf("다음날은 %d년 %d월 %d일 입니다.", year, month, day);
	return 0;
}
