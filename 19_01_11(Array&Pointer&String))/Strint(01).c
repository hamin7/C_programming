#include <stdio.h>
#include <string.h>

int getStrLen(char *p);

int main()
{

	char str[80] = "C Programming";
	char *pc = "mango";

	printf("%s\n", str);
	printf("%s\n", pc);


	/*
	while (str[count] != 0) {
		count++;
	}
	*/

	printf("%s, count : %d\n", str, getStrLen(str));

	scanf("%s", str);
	printf("%s, count : %d\n", str, getStrLen(str));
	//pc = str;
	scanf("%s", pc);         // pc는 지금 상수를 가리키고 있는데 상수 자체의 메모리는 바꿀 수 없음.



	pc = "apple";       // 다시 상수 가리키므로 scanf 못씀.

	return 0;
}

int getStrLen(char *p) {
	int count = 0;

	while (*p != 0) {
		count++;
		p++;
	}
	return count;
}

// string.h 라이브러리에 strlen라는 함수가 우리가 만든 getStrLen와 같음.
