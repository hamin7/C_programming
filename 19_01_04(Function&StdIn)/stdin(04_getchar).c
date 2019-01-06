#include <stdio.h>

int main()
{
char ch; 

printf("Please enter any character: "); 

ch = getchar(); // 문자 입력

putchar (ch); // 문자 출력
printf(" is a letter you typed.\n");

fflush(stdin); 

printf("Please enter any character: "); 
scanf("%c", &ch);
printf("%c is a letter you typed.\n", ch); 

return 0;
}
