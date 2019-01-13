#include <stdio.h>

int compare(char *text, char *search);

int main()
{
	char text[40];
	char search[40];
	int value = 0;

	while (1) {
		printf("문자열 : \n");       // 기준이 될 영문자 패턴 입력.
		scanf("%s", text);
		printf("검색패턴 :. \n");      // 비교할 검색패턴 입력.
		scanf("%s", search);

		value = compare(text, search);     // 패턴 비교함수.

		if ((value == 1)&&(strlen(text)==strlen(search))) {      // 함수에서 비교한 문자열이 같고, 문자열 길이가 같다면
			printf("패턴에 맞습니다. \n\n");
		}
		else if (value == 0) {              // 함수에서 비교한 문자열이 다르다면
			printf("패턴에 맞지 않습니다. \n\n");
		}
	}
	return 0;
}

int compare(const char *str1, const char *str2) {
	for (int i = 0; i < strlen(str2); ) {              // 검색패턴 문자열의 길이 만큼 비교
		if ((*str1 == *str2)||(*str2=='?')) {          // str1과 str2의 문자열이 같거나, str2의 문자가 ?인경우
			str1++, str2++;                            // str1과 str2를 ++ 해줌
		}else 
		{
			return 0;
		}
	}
	return 1;                              // 기준 문자열과 검색 패턴 문자열이 같을경우 1을 리턴.
}
