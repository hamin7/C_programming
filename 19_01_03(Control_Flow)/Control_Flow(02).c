#include <stdio.h>     //   전처리

int main() {

	for( int i = 1; i <= 9; i++){
    printf("2 * %d = %2d \n", i, i * 2);
  }

	return 0;
}

// 초기화 두번 하면 어케됨?? i=0; 해놓고 i=1; 또 한다면???
