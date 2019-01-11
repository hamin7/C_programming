#include <stdio.h>
#include <string.h>

void encrypt(int pw, char *str_crypt, const char *str);

int main() {
	char str[80] = "HELLO";
	char str2[80] = "";
	char *p = str;
	int pw = 5;

	printf("%s\n", str);

	// 암호화
	encrypt(pw, str2, str);	
	printf("%s\n", str2);

	// 복호화	(원을 반대로 돌리기 위해 음수로 호출)
	encrypt(-pw, str2, str2);
	printf("%s\n", str2);	

	return 0;
}

// 암호화 함수
// str이 가리키는 문자열 배열의 내용 문자 하나씩 pw만큼 이동하여
// 새로운 문자로 구성
// int pw : 문자를 이동할 횟수. ex) 3 이면 'A' -> 'D' 로 변환
// char *str_crypt : 변환된 문자열을 저장할 배열
// char *str : 원본 문자열 (변경할 수 없도록 const 선언)
void encrypt(int pw, char *str_crypt, const char *str) {

	// 암호 숫자 보정 ('A'~'Z'까지 범위 안에 들어오도록)
	pw %= 26;
	if (pw < 0) pw += 26;

	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		str_crypt[i] = str[i] + pw;	// pw값 만큼 오른쪽으로 이동
		if (str_crypt[i] > 'Z')		// 'A'~'Z'범위를 벗어났다면
			str_crypt[i] -= 26;		// 'A'부터 시작해서 다시 위치를 잡아줌
	}
}
