#include <stdio.h>     //   전처리

int main() {

	int age, dis, fee;
	printf("잔액 : 10000원 \n");
	printf("나이는? : ");
	scanf("%d", &age);
	printf("이용한 거리(km)는? : ");
	scanf("%d", &dis);

	if ((age >= 7) && (age <= 12))
	{
		fee = 450;
		printf("승객구분 : 어린이 \n");
	}
	else if ((age >= 13) && (age <= 18)) {
		fee = 720;
		printf("승객구분 : 청소년 \n");
	}
	else if ((age >= 19) && (age <= 64)) {
		fee = 1250;
		printf("승객구분 : 어른 \n");
	}
	else if (age >= 65) {
		fee = 0;
		printf("승객구분 : 경로 \n");
	}
	else{
		fee = 0;
		printf("승객구분 : 유아 \n");
	}

	printf("이용거리 : %d km \n", dis);
	
	if(dis > 50){
		int add;
		add = ((dis - 50) / 8)+1;
		fee = fee + (add * 100);
		dis -= 50;
	}
	else if (dis > 10)
	{
		int add;
		add = ((dis - 10) / 5)+1;
		fee = fee + (add * 100);
	}

	printf("금액 %d \n", fee);
	printf("잔액 %d \n", 10000 - fee);


	return 0;
}

