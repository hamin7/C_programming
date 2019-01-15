#include <stdio.h>
#include <string.h>
#include <stdlib.h>


double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double div(double x, double y);

int main() {
	double(*pf[4])(double, double) = { add, sub, mul, div};
	int menu;
	double a, b;
	char op[] = "+-*/";

	printf("0.덧셈 1.뺄셈 2.곱셈 3.나눗셈 \n");
	scanf("%d", &menu);
	printf("두 수를 입력하세요. \n");
	scanf("%d %d", &a, &b);
	if (menu == 0) {
		pf[0] = add;
	}
	else if (menu == 1){
		pf[1] = sub;
	}
	else if (menu == 2) {
		pf[2] = mul;
	}
	else if (menu == 3) {
		pf[3] = div;
	}

	printf("%lf %c %lf = %lf\n", a, op[menu], b, pf[menu](a, b));

	return 0;
}

double add(double x, double y) {
	return x + y;
}

double sub(double x, double y) {
	return x - y;
}
double mul(double x, double y) {
	return x * y;
}
double div(double x, double y) {
	return x / y;
}
