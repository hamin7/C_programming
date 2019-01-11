#include <stdio.h>

int main()
{
	int array[3][3] = { 1,2,3,4,5,6,7,8,9 };
	//int *p = array;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d", array[i][j]);
			//printf("%d", *(array + i *3 + j));
		    //printf("%d", *(&p[i] + j));   앞 예제 처럼하면 안됨 이중포인터임
		    //printf("%d", *(p+i*3+j));
			//printf("%d", i, *(p++));
		}
		printf("\n");
	}

	int p = array[1];
	for (int i = 0; i < 3; i++) {
		*p *= (-1);
		printf("%d\n", *(&array[1] + i));
		printf("%d\n", *(array+3+i));
		printf("%d",  *(p++));
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d", array[i][j]);
			//printf("%d", *(array + i *3 + j));
			//printf("%d", &p[i] + j);   앞 예제 처럼하면 안됨 이중포인터임
			//printf("%d", *(p+i*3+j));
			//printf("%d", i, *(p++));
		}
		printf("\n");
	}

	return 0;
}
