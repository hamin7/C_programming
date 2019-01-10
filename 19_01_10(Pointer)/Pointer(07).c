#include <stdio.h>

int GetData(void *p_data, int len);

int main()
{
	int a = 0x12345678;

	printf("%x\n", GetData(&a, 1));
	printf("%x\n", GetData(&a, 2));
	printf("%x\n", GetData(&a, 4));

	return 0;
}

int GetData(void *p_data, int len) {
	int result = 0;
	if (len == 1)
		result = *(char *)p_data;
	else if (len == 2)
		result = *(short *)p_data;
	else if (len == 4)
		result = *(int *)p_data;
	return result;
}
