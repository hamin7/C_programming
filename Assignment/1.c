#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int time;
	int hr = 0, min = 0, sec = 0;
	printf("�ʴ����� �ð��� �Է��ϼ��� : ");
	scanf("%d", &time);
	hr = time / 3600;
	min = (time % 3600) / 60;
	sec = (time % 3600) % 60;

	printf("%d�ð� %d�� %d�� \n", hr, min, sec);
}