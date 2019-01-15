#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int add(int x, int y);
int sub(int x, int y);

int main() {
	int (*p)(int , int) = add;
	int menu;

	scanf("%d\n", &menu);
	if (menu == 0){
		p = add;
	}else {
		p = sub;
	}

	printf("%d + %d = %d \n", 3, 4, p(3, 4));

	return 0;
}

int add(int x, int y) {
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}
// 다른 함수에게 이 함수를 실행 시키라고 주소를 줌.
// 이거도 이상함.
