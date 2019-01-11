#include <stdio.h>

int main()
{

	char str[80] = "C Programming";
	char *pc = "mango";

	printf("%s\n", str);
	printf("%s\n", pc);

	scanf("%s", str);
	//pc = str;
	scanf("%s", pc);         // pc는 지금 상수를 가리키고 있는데 상수 자체의 메모리는 바꿀 수 없음.

	pc = "apple";       // 다시 상수 가리키므로 scanf 못씀.

	return 0;
}
