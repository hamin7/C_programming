#include <stdio.h>

int main()
{
	int array[5] = { 1, 2, 3, 4, 5 };
	int *p = array;         // &array[0], &array, (array + 0)

	for (int i = 0; i < 5; i++) {
		//printf("array[%d] = %d\n", i, array[i]);
		//printf("array[%d] = %d\n", i, *(array + i));
		//printf("array[%d] = %d\n", i, p[i]);
		//printf("array[%d] = %d\n", i, *(p+i));
		printf("array[%d] = %d\n", i, *(p++));         // 포인터는 이동이 가능 이코드 밑에 for루프 또 하면 쓰레기값 가리키고 있음.
	}

	return 0;
}
