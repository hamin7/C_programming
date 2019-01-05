#include <stdio.h>     //   전처리

int main() {

	int sum = 0;
  int k = 1;
	int x, m;
	printf("아무수나 두 수 입력하세요 ", sum);
	scanf("%d %d", &x, &m);

	for (int i = 0; i <= m; i++) {   //for (int i = 0; i <= num; i++, k*= x) 이렇게 올려도 됨
    sum += k;
    printf("%d^%d(%d) + \n", x, i, k);
    k *= x;
	}
	printf("총 합은 %d \n", sum);

	return 0;
}

// 초기화 두번 하면 어케됨?? i=0; 해놓고 i=1; 또 한다면???
