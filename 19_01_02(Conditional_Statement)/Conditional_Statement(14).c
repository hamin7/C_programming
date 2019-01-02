#include <stdio.h>     //   전처리

int main() {

	double weight, height, BMI;

	printf("몸무게(kg)와 신장(m)을 입력하시오 \n");
	scanf("%lf %lf", &weight, &height);
	printf("몸무게는 %lf kg이고, 신장은 %lf m \n", weight, height);
	BMI = weight / (height * height);
	printf("BMI는 %lf \n", BMI);

	if (BMI >= 35)
	{
		printf("넌 초고도 비만");
	}
	else if ((BMI >= 30) && (BMI < 35))
	{
		printf("넌 고도비만");
	}
	else if ((BMI >= 25) && (BMI < 30))
	{
		printf("넌 비만");
	}
	else if ((BMI >= 23) && (BMI < 25))
	{
		printf("넌 과체중");
	}
	else if ((BMI >= 18.5) && (BMI < 23))
	{
		printf("넌 정상");
	}
	else if (BMI < 18.5)
	{
		printf("넌 고도비만");
	}


	return 0;
}

// 이거 else if 수정해야 함.
