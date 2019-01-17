#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int time;
	int hr = 0, min = 0, sec = 0;
	printf("초단위의 시간을 입력하세요 : ");
	scanf("%d", &time);
	hr = time / 3600;
	min = (time % 3600) / 60;
	sec = (time % 3600) % 60;

	printf("%d시간 %d분 %d초 \n", hr, min, sec);
}