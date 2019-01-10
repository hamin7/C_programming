#include <stdio.h>

#define SIZE 120

int main()
{
	int data = 100;
	char ch = 'A';
	int *p_data = &data;
	char *p_ch = &ch;


	printf("%p, %p, %d\n", &data, p_data, &p_data);

	printf("%d, %d\n", data, *p_data);

	data = 200;       // 직접 지정방식.

	printf("%d, %d\n", data, *p_data);

	*p_data = 300;       // *붙인 포인터와 그것이 지칭하는 변수는 같다.
	printf("%d, %d\n", data, *p_data);

	*p_ch = 'B';
	printf("%c\n", ch);

	printf("%d\n", *p_data + 100);
	printf("%d\n", data + 100);

	return 0;
}
