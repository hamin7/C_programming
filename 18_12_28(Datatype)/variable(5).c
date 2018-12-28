#include <stdio.h>     //   전처리

int main() {

	printf("%c \n", 'A');
	printf("%d \n", 'A');
	printf("%s \n", "A");  // 한글자만 있더라도 쌍따옴표로 있다면 문자열로 인식
	printf("\tABC\tDEF\nGHI\n\'\"\\\a\n");    // 이스케이프 문자 특수문자


	return 0;
}
