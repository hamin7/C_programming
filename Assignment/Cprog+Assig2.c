#include <stdio.h> 

int len(char str[]);
int my_strcmp(char str[], char pat[]);

int main()
{
	char str[100] = {0};
	char pat[100] = {0};
	for(;;){
		printf("���ڿ�: ");
		gets(str);// ���ڿ��� �Է¹޴´� 
		if(my_strcmp(str, "exit"))
			break;// exit �� �Է¹����� ���α׷��� �����Ų�� 
		printf("�˻�����: ");
		gets(pat);//�˻� ������ �Է� �޴´� 
		
		if(my_strcmp(str, pat))
			printf("���Ͽ� �½��ϴ�.\n");
		else
			printf("���Ͽ� ���� �ʽ��ϴ�.\n"); 
	}
}

int len(char str[])// ���ڿ��� ���̸� ��ȯ�ϴ� �Լ� 
{
	int i = 0;
	for(;;i++){
		if(!str[i])// str���� ������ NULL���� ��Ÿ���� �� ��ġ�� ��ȯ�Ѵ� 
			return i;
	}
}


int my_strcmp(char str[], char pat[]){   
	if(len(str) + len(pat) == 0)  // ������ ��ġ �ϴ� ��� 
	{
		return 1;
	}
	else if(len(str) * len(pat) == 0)  // ���̰� ���� �ʴ� ��� 
	{
		return 0;
	}
	else if(pat[0] == '?') // ?�� ���� �ѹ��ڸ� ��ü�ϴ� ��쿡�� ���� ĭ���� �̵��Ѵ�
	{
		return my_strcmp(str + 1, pat + 1);
	} 
	else if(pat[0] == '*')  // ���� ���� ���ڸ� ��ü�ϴ�  str���� �� ���ھ� ���� ���� ��� ���Ѵ�
	{
		return my_strcmp(str + 1, pat) || my_strcmp(str + 1, pat + 1);	
	}
	else if(pat[0] == str[0]) // ���ڰ� ��ġ�ϸ� ���� ĭ���� ���� ��� ���Ѵ� 
	{
		return my_strcmp(str + 1, pat + 1);
	}
	else  // ����ġ. 
		return 0;
}




