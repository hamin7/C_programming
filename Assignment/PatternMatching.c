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

		if ((value == 1) && (strlen(text) == strlen(search))) {      // 함수에서 비교한 문자열이 같고, 문자열 길이가 같다면 (길이를 비교하는 이유는 search가 text와 같지만 그 후에 추가로 다른 문자가 더 있을 수 도 있기 때문)
			printf("패턴에 맞습니다. \n\n");
		}
		else if (value == -1)                                 // *을 포함하는 search의 경우.               
		{
			if ((*(text + strlen(text) - 1)) == (*(search + strlen(search) - 1)))     // 마지막 캐릭터가 같은지 비교.
			{
				printf("패턴에 맞습니다. \n\n");
			}
			else {
				printf("패턴에 맞지 않습니다. \n\n");              // hello 와 h*l다름을 가려낸 것.
			}
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
		}
		else if (*str2 == '*') {                       // search(str2)에 *이 있다면
			str1++;                                    // str2는 *에 정지해 있고 str1만 이동
			return -1;
		} else                                         // *이던 ?이던 그냥 문자열이 같지 않은 경우
		{
			return 0;
		}
	}
	return 1;                              // 기준 문자열과 검색 패턴 문자열이 같을경우 1을 리턴.
}
