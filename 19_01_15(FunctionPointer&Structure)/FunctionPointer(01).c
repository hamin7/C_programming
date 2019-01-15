#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

double a(int k);
double b(int k);

int main() {
	int(*p)(int, int) = a;
	int k, n, menu;
	double(*pf)(int k);
	double sum = 0.0;

	printf("k = ?");
	scanf("%d", &k);
	printf("n = ?");
	scanf("%d", &n);
	printf("수식을 선택하세요. 1) 1/k   2) cos(k)");
	scanf("%d", &menu);

	if (menu == 0) {
		pf = a;
	}
	else {
		pf = b;
	}
	for (int i = 0; i < n; i++) {
		double temp;
		temp = pf(k)*pf(k) + pf(k) + 1;
		sum += temp;
	}

	printf("결과 값은 = %lf \n", sum);
	return 0;
}

double a(int k) {
	return 1 / (double)k;
}

double b(int k) {
	return 1/(double)k;
}
// 다른 함수에게 이 함수를 실행 시키라고 주소를 줌.
