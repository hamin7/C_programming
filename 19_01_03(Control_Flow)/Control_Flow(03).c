#include <stdio.h>     //   전처리

int main() {
  int a, b;
  int x, y;
  scanf("%d, %d ", &a, &b);
  if (a>= b){
    x = a;
    y = b;
  } else if(b>a){
    x = b;
    y = a;
  }

  printf("%d\n", x);
  printf("%d\n", y);



	return 0;
}

// 최대공약수
