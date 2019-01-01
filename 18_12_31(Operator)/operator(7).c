#include <stdio.h>     //   전처리

int main() {

	int a = 30;
	int res;

	res = (a > 10) && (a++ < 20);
	// res = (a < 10) %% (a++ < 20);
	printf("a = %d \n", a);

	res = (a < 10) || (a > 20);
	//res = (a < 10) || (a > 20);     // 관계연산자가 우선순위가 높아서 실행 되긴 함
	printf("res = %d \n", res);

	res = !(!a);
	printf("res = %d \n", res);
  
	return 0;
}
