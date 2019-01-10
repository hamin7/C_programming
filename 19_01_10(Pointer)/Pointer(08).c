#include <stdio.h>

int GetData(void *p_data, int len);

int main()
{
	int a = 0x12345678;
	char *pa = &a;

	printf("%x\n", *pa);

	pa++;   //pa = pa + 1;

	printf("%x\n", *pa);

	*pa = 0xff;
	printf("%x\n", a);

	pa++;   //pa = pa + 1;

	printf("%x\n", *pa);

	pa++;   //pa = pa + 1;

	printf("%x\n", *pa);

	pa -= 2;   // pa = pa -2;
	printf("%x\n", *pa);        // 뭐지 왜 ffffff지???

	return 0;
}
