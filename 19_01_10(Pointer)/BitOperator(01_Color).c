#include <stdio.h>

int main()
{
	unsigned int color;
	unsigned char red;
	unsigned char *p_red = &color;

	printf("color =");
	scanf("%x", &color);

	red = color >> 8 * 2 & 0xff;
	p_red += 2;

	printf("red color = %x, %d \n", red, red);

	printf("red color = %x, %d \n", *p_red, *p_red);

	return 0;
}
