#include <stdio.h>     //   전처리

int main() {
	printf("%d\n", 3);
	printf("%d\n", 3 + 4);
	printf("%5d\n", 3);
	printf("%05d\n", 3);
	printf("%lf\n", 3.4);
	printf("%.1lf\n", 3.4);  // 소수점 한자리 까지만
	printf("%.1lf\n", 3.45);
	printf("%10.1lf\n", 3.4);
	printf("%010.1lf\n", 3.4);

	printf("%d과 %d의 합은 %d입니다\n", 3, 4, 3 + 4);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	return 0;
}
