#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point			// 구조체 point의 정의. 구조체 point는 점의 좌표를 나타냄
{
	int xpos;
	int ypos;
};

int getArea(struct point p1, struct point p2);			// 구조체를 매개변수로 하고 정수형을 반환하는 사각형의 크기를 구하는 함수.

int main() {
	struct point P1, P2;
	int area;
	
	printf("P1(x,y) = ?");
	scanf("%d %d", &P1.xpos, &P1.ypos);			// P1의 좌표 입력

	printf("P2(x,y) = ?");
	scanf("%d %d", &P2.xpos, &P2.ypos);			// P2의 좌표 입력.

	area = getArea(P1, P2);

	printf("P1(%d, %d)과 P2(%d, %d)를 대각선으로 하는 사각형의 면적은 %d입니다. \n", P1.xpos, P1.ypos, P2.xpos, P2.ypos, area);

	return 0;
}

int getArea(struct point p1, struct point p2) {
	int square;			// square는 사각형의 넓이
	int width = 0;			// width는 가로길이
	int height = 0;				// height는 사각형의 높이

	if ((p2.xpos - p1.xpos) < 0) {
		width = -(p2.xpos - p1.xpos);			// p2 x좌표 - p1 x좌표가 음수라면 양수로 바꿔줌(길이니까)
	}
	else {
		width = (p2.xpos - p1.xpos);			// p2 x좌표 - p1 x좌표가 양수라면 그대로
	}

	if ((p2.ypos - p1.ypos) < 0) {
		height = -(p2.ypos - p1.ypos);			// p2 y좌표 - p1 y좌표가 음수라면 양수로 바꿔줌(길이니까)
	}
	else {
		height = (p2.ypos - p1.ypos);			// p2 y좌표 - p1 y좌표가 양수라면 그대로
	}

	square = width * height;			// 가로 길이와 세로 길이를 곱하여 넓이를 구함

	return square;			// 넓이를 리턴
}