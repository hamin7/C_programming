#include <stdio.h>     //   전처리

int main() {
	int a;
	int b, c;
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("a = %d \n", a);
	printf("b = %d \n", b);
	printf("c = %d \n", c);
	printf("da = %lf\n", da);
	printf("ch = %d \n", ch);     //  ch도 정수형  대문자 A에 해당하는 아스키 코드값 나옴

	return 0;
}


ctrl + k c

초기화는 반드시 숫자로만 int b=a;안됨
