#include <stdio.h>     //   전처리

int main() {

	int sum = 0;
  int num;
  printf("아무수나 입력하세요", sum);
  scanf("%d", &num);

  for(int i = 1; i <= num; i++){      // for(; i<= num; ) 해도 됨   while과 for문은 서로 호환 됨.
    sum += i;
  }     // 변수의 유효범위   do while문 쓸 때는 while끝에 ; 찍어 줘야 함 (n==-1이라면??? -> do while은 무조건 1번은 실행 함)

	printf("총 합은 %d \n", sum);

	return 0;
}
