#include <stdio.h>
#include <string.h>

int main()
{
	char text[40];
	int key;
	printf("문자열을 입력하세요. \n");
	scanf("%s", &text);
	printf("암호로 사용할 숫자를 입력하세요. \n");
	scanf("%d", &key);

	void XOR_cipher(key, text);
	printf("\n");

	return 0;
}

void XOR_cipher(int key, char text[]) {
	char cipher[40] = { '\n' };
	int i, length;
	length = strlen(text);

	for (i = 0; i < length; i++) {
		cipher[i] = text[i] ^ key;
	}
	printf("암호문 : %s\n\n", cipher);
}
