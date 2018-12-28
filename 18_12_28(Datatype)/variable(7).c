#include <stdio.h>     //   전처리

int main() {

	float x = 1e6;
	//	float x = 3.14f;
	//  double x = 3.14;
	float ft = 1.12345678901234567890;    // 유효숫자 확인 위함
	double db = 1.12345678901234567890;    // 유효숫자 확인

	printf("%.20lf\n", ft);
	printf("%.20lf\n", db);


	printf("%lf\n", x);
	printf("%e\n", x);

	return 0;
}
