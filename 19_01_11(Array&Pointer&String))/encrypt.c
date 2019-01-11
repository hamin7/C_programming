#include <stdio.h>
#include <string.h>

void encrypt(int pw, char *str_crypt, const char *str);

int main() {
	char str[80] = "HELLO";
	char str2[80] = "";
	char *p = str;
	int pw = 5;

	printf("%s\n", str);

	// ��ȣȭ
	encrypt(pw, str2, str);	
	printf("%s\n", str2);

	// ��ȣȭ	(���� �ݴ�� ������ ���� ������ ȣ��)
	encrypt(-pw, str2, str2);
	printf("%s\n", str2);	

	return 0;
}

// ��ȣȭ �Լ�
// str�� ����Ű�� ���ڿ� �迭�� ���� ���� �ϳ��� pw��ŭ �̵��Ͽ�
// ���ο� ���ڷ� ����
// int pw : ���ڸ� �̵��� Ƚ��. ex) 3 �̸� 'A' -> 'D' �� ��ȯ
// char *str_crypt : ��ȯ�� ���ڿ��� ������ �迭
// char *str : ���� ���ڿ� (������ �� ������ const ����)
void encrypt(int pw, char *str_crypt, const char *str) {

	// ��ȣ ���� ���� ('A'~'Z'���� ���� �ȿ� ��������)
	pw %= 26;
	if (pw < 0) pw += 26;

	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		str_crypt[i] = str[i] + pw;	// pw�� ��ŭ ���������� �̵�
		if (str_crypt[i] > 'Z')		// 'A'~'Z'������ ����ٸ�
			str_crypt[i] -= 26;		// 'A'���� �����ؼ� �ٽ� ��ġ�� �����
	}
}
