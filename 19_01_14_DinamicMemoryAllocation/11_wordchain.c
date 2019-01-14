#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char input[80];
	char **words = NULL;	// 끝말잇기 단어를 배열처럼 저장할 2중포인터
	int n = 0;			// 현재까지 저장한 단어의 수

	while (1) {
	loop_start:
		printf("단어 입력 : ");
		gets(input);
		if (strcmp(input, "end") == 0) {
			break;
		}
		if (n > 0) {
			int last_index = strlen(words[n - 1]) - 1;		// 마지막 단어의 마지막 글자 위치
			if (words[n - 1][last_index] != input[0]) {
				// 마지막 단어의 마지막 글자와 지금 입력된 단어의 첫글자가 같지 않다면 오류
				printf("#### 끝말 잇기가 불가능합니다.\n");
				continue;									// 단어를 저장하지 않고 다시 입력하도록 함
			}
			for (int i = 0; i < n; i++) {
				if (strcmp(words[i], input) == 0) {
					// 입력된 단어 중 같은 단어가 있다면 오류
					printf("#### 이미 입력한 단어입니다.\n");
					goto loop_start;						// 단어를 저장하지 않고 다시 입력하도록 함
					// while loop의 최상단으로 이동
				}
			}
		}
		// 여기까지 넘어왔다면 단어를 저장하자
		n++;
		words = (char **)realloc(words, sizeof(char *) * n);	// 2중포인터 먼저 메모리 할당
		words[n - 1] = (char *)malloc(strlen(input) + 1);		// 단어를 저장할 메모리 할당 (널문자를 저장할 공간까지 확보)
		strcpy(words[n - 1], input);							// gets()로 입력받은 문자열을 복사
	}

	// 끝말잇기 전체 목록을 출력
	for (int i = 0; i < n; i++) {
		printf("%s", words[i]);
		if (i < n - 1)
			printf(" - ");
	}
	printf("\n");

	// 그동안 할당 받은 메모리를 모두 반납
	for (int i = 0; i < n; i++) {
		free(words[i]);
	}
	free(words);
}
