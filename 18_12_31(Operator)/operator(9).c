#include <stdio.h>     //   전처리

int main() {

	int year = 2100;
	int res;

	res = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);
		res ? printf("윤년입니다. \n") : printf("윤년이아닙니다");

	return 0;
}
