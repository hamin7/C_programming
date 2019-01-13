#include <stdio.h> 

int len(char str[]);
int my_strcmp(char str[], char pat[]);

int main()
{
	char str[100] = {0};
	char pat[100] = {0};
	for(;;){
		printf("문자열: ");
		gets(str);// 문자열을 입력받는다 
		if(my_strcmp(str, "exit"))
			break;// exit 를 입력받으면 프로그램을 종료시킨다 
		printf("검색패턴: ");
		gets(pat);//검색 패턴을 입력 받는다 
		
		if(my_strcmp(str, pat))
			printf("패턴에 맞습니다.\n");
		else
			printf("패턴에 맞지 않습니다.\n"); 
	}
}

int len(char str[])// 문자열의 길이를 반환하는 함수 
{
	int i = 0;
	for(;;i++){
		if(!str[i])// str에서 최초의 NULL값이 나타날때 그 위치를 반환한다 
			return i;
	}
}


int my_strcmp(char str[], char pat[]){   
	if(len(str) + len(pat) == 0)  // 끝까지 일치 하는 경우 
	{
		return 1;
	}
	else if(len(str) * len(pat) == 0)  // 길이가 맞지 않는 경우 
	{
		return 0;
	}
	else if(pat[0] == '?') // ?가 나와 한문자를 대체하는 경우에는 다음 칸으로 이동한다
	{
		return my_strcmp(str + 1, pat + 1);
	} 
	else if(pat[0] == '*')  // 여러 개의 문자를 대체하는  str에서 한 문자씩 지워 가며 계속 비교한다
	{
		return my_strcmp(str + 1, pat) || my_strcmp(str + 1, pat + 1);	
	}
	else if(pat[0] == str[0]) // 문자가 일치하면 다음 칸으로 가서 계속 비교한다 
	{
		return my_strcmp(str + 1, pat + 1);
	}
	else  // 불일치. 
		return 0;
}




