#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point			// ����ü point�� ����. ����ü point�� ���� ��ǥ�� ��Ÿ��
{
	int xpos;
	int ypos;
};

int getArea(struct point p1, struct point p2);			// ����ü�� �Ű������� �ϰ� �������� ��ȯ�ϴ� �簢���� ũ�⸦ ���ϴ� �Լ�.

int main() {
	struct point P1, P2;
	int area;
	
	printf("P1(x,y) = ?");
	scanf("%d %d", &P1.xpos, &P1.ypos);			// P1�� ��ǥ �Է�

	printf("P2(x,y) = ?");
	scanf("%d %d", &P2.xpos, &P2.ypos);			// P2�� ��ǥ �Է�.

	area = getArea(P1, P2);

	printf("P1(%d, %d)�� P2(%d, %d)�� �밢������ �ϴ� �簢���� ������ %d�Դϴ�. \n", P1.xpos, P1.ypos, P2.xpos, P2.ypos, area);

	return 0;
}

int getArea(struct point p1, struct point p2) {
	int square;			// square�� �簢���� ����
	int width = 0;			// width�� ���α���
	int height = 0;				// height�� �簢���� ����

	if ((p2.xpos - p1.xpos) < 0) {
		width = -(p2.xpos - p1.xpos);			// p2 x��ǥ - p1 x��ǥ�� ������� ����� �ٲ���(���̴ϱ�)
	}
	else {
		width = (p2.xpos - p1.xpos);			// p2 x��ǥ - p1 x��ǥ�� ������ �״��
	}

	if ((p2.ypos - p1.ypos) < 0) {
		height = -(p2.ypos - p1.ypos);			// p2 y��ǥ - p1 y��ǥ�� ������� ����� �ٲ���(���̴ϱ�)
	}
	else {
		height = (p2.ypos - p1.ypos);			// p2 y��ǥ - p1 y��ǥ�� ������ �״��
	}

	square = width * height;			// ���� ���̿� ���� ���̸� ���Ͽ� ���̸� ����

	return square;			// ���̸� ����
}