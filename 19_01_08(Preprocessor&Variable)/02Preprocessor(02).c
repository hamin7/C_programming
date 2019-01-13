#include <stdio.h>

#include <math.h>
#define PI 3.141592
#define RADIAN(X) (PI * (X) / 180)


int main() {
	for (int degree = 0; degree <= 180; degree += 30)
	{
		double s = sin(RADIAN(degree));
		printf("sin(%d도) = %lf \n", degree, s);
	}

	return 0;
}
