#include <stdio.h>

int patterncheck(char *input, char *pattern);		//Function to compare pattern and input
int progexit(char *input, char *pattern);			//exit function

int main() {

	int a, b;
	char input[100];
	char pattern[100];

	while (1) {
		printf("문자열을 입력해주세요 : \n");
		gets(input);								//user input store into 'input'
		if (progexit(input, pattern) == 0) {		//종료 함수 -> if input = "exit" -> return 0 to exit 
			return 0;								//exit program
		}
		printf("검색패턴을 입력해주세요 : \n");
		gets(pattern);								//user input store into 'pattern'
		if (progexit(input, pattern) == 0) {		//종료 함수 -> if pattern = "exit" -> return 0 to exit
			return 0;								//exit program
		}

		//call compare function
		if (patterncheck(input, pattern) == 1) {
			printf("\n패턴에 맞습니다\n\n");
		}
		else if (patterncheck(input, pattern) == 0) {
			printf("\n패턴에 맞지 않습니다\n\n");
		}

	}
	return 0;
}

//Function to compare pattern and input
// 0 = No match
// 1 = Match
int patterncheck(char *input, char *pattern) {
	int i, j;
	int flag;
	int count = 0;
	int count2 = 0;

	for (i = 0; input[i] != '\0'; i++)		//finding the size of input
		count++;
	for (i = 0; pattern[i] != '\0'; i++)	//finding the size of pattern
		count2++;

	for (i = 0; i < count; i++) {			//setting limit to size of input
		if (pattern[0] == '\0') {			//if pattern is empty, return 0
			return 0;
		}
		else if (pattern[i] == input[i]) {	//if same, move on to next
			continue;
		}
		else if (pattern[i] == '?') {		//if '?', move on to next
			continue;
		}
		else if (pattern[i] == '*') {		//if '*', call function patterncheck (recursive)
			if (pattern[count2 - 1] == '*' && i == count2 - 1) {
				return 1;					//if '*' is at the end, return 1 for match
			}
			for (j = i; input[j] != '\0'; j++) { //start from input[j] until \0
				if (patterncheck(input + j, pattern + i + 1) == 1) {
					return 1;				//if match, return 1
				}
				else
					flag = 0;				//if match is not found, set flag to 0 and not return 0;
			}
			if (flag == 0) {		//if after for loop, match is not found, return 0. 
				return 0;
			}
		}
		else if (pattern[i] != input[i]) {	//if not the same, return 0
			return 0;
		}
	}
	if (i != count2)			//if i doesn't reach count2 then mismatch (incase of extra data behind)
		return 0;				//return 0 for mismatch
	return 1;					//return 1 for match

}

//exit function
//if input = "exit", return 0
//if pattern = "exit", return 0
int progexit(char *input, char *pattern) {
	if (input[0] == 'e' && input[1] == 'x' && input[2] == 'i' && input[3] == 't')
		return 0;
	else if (pattern[0] == 'e' && pattern[1] == 'x' && pattern[2] == 'i' && pattern[3] == 't')
		return 0;
}