#include <stdio.h>     //   전처리

int main() {

	int a, angle;
	printf("각도를 입력하시오 \n");
	scanf("%d", &a);

	angle = a%360;
	if (angle <0){
		angle += 360;
	}

	if((angle>0)&&(angle<90))
	   {
		   printf("1사분면");
	   }
	   else if((angle>90)&&(angle<180))
	   {
		   printf("2사분면");
	   }
	   else if((angle>180)&&(angle<270))
	   {
		   printf("3사분면");
	   }
	   else if((angle>270)&&(angle<360))
	   {
		   printf("4사분면");
	   }
	   else if(angle == 0)
	   {
		   printf("양의 x축");
	   }
	   else if(angle == 90)
	   {
		   printf("양의 y축");
	   }
	   else if(angle == 180)
	   {
		   printf("음의 x축");
	   }
	   else if(angle == 270)
	   {
		   printf("음의 y축");
	   }

	return 0;
}
