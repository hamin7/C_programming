#include <stdio.h>     //   전처리
void drawTri();

int main() {

	for (int i = 1; i <= 3; i++) {
		drawTri();
	}
	return 0;
}

void drawTri() {             // 또는 void drawTri(void)
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
	printf("\n");
	}
	return 0;
}

//함수명 첫번째 글자 대문자 가능?
