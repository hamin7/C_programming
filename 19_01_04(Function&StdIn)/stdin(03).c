#include <stdio.h>

int main(void) {
	int n;
	char c;
	//c = getchar();
	//scanf("%d", &n);

	// fflush(stdin);
	c = getche(stdin);       // 얘는 c = getchar(); 와 같음
	//rewind(stdin);
	c = getche(stdin);
	//putchar(c);
	putc(c, stdout);
	//scanf(" %c", &c);

	return 0;

}
