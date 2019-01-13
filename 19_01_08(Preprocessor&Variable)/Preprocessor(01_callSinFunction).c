#include <stdio.h>
#include <math.h>
#define PI 3.141592
#define _USE_MATH_DEFINES

int main()
{
	for (int degree = 0; degree <= 180; degree += 30)
	{
		double radian = M_PI * degree / 180;
		double s = sin(radian);
		printf("sin(%d도) = %lf \n", degree, s);
	}
}


