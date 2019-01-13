//2014005032_이한주

#include<stdio.h>

int matching(char* sentence, char* pattern);//문자열 매칭 함수
int size_check(char* sentence); //문자열 길이 반환
int exit_check(char* sentence); //종료 함수

int main() {
	char sentence[100]; //문자열
	char pattern[100]; //검색패턴

	while (1) { //exit 나올때 까지 무한루프
		printf("문자열 : ");
		scanf("%s", sentence);
		if (exit_check(sentence)) break;
		printf("검색패턴 : ");
		scanf("%s", pattern);
		if (exit_check(pattern)) break; //문자열, 검색패턴 둘 중 하나라도 exit이 입력되면 종료

		if (matching(sentence, pattern) == 1) printf("패턴에 맞습니다.\n");
		else printf("패턴에 맞지 않습니다.\n");

		printf("\n");
	}

	return 0;
}

int matching(char* sentence, char* pattern) {
	int s_index = 0, p_index = 0; // s_index 문자열 인덱스, p_index 검색패턴 인덱스
	int s_size = size_check(sentence);
	int p_size = size_check(pattern);
	int flag = -1;

	while (1) {
		if (s_index == s_size || p_index == p_size) break; //문자열, 검색패턴 둘중 하나라도 끝에 도달했을 경우 루프탈출

		if (sentence[s_index] == pattern[p_index] || pattern[p_index] == '?') {
			s_index++;
			p_index++;
		} //해당 인덱스의 영문자가 동일하거나, '?'가 나왔을 경우 다음 index로 다시 진행 
		else if (pattern[p_index] == '*') break; //'*'의 경우 추가 작업을 위해 루프 탈출
		else return -1;	//위 경우(매칭,'?','*')가 아닐경우 false
	}

	if (s_index == s_size && p_index == p_size) return 1; //패턴 동일
	else if (p_index == p_size - 1 && pattern[p_size - 1] == '*') return 1; //패턴에서 '*'가 마지막에 위치한 경우, '*'앞의 내용은 위에서 루프를 통해 매칭 되는것을 확인 가능
	else if (s_index == s_size || p_index == p_size) return -1; //한 쪽의 문장이 먼저 끝난 경우 false

	for (int i = s_index; i < s_size; i++) {
		flag = matching(&sentence[i], &pattern[p_index + 1]);
		if (flag == 1) break;
	} // '*'문자가 중간에 있는 경우에 해당 하고, '*'이 몇개의 문자를 포함 할지 알 수 없으므로
	  //'*' 뒤의 문자열로 다시 함수를 호출하여 비교한다. flag가 1이 된다면 매칭 성공 
	return flag;
}

int size_check(char* sentence) {
	int size = 0;

	while (sentence[size] != '\0') {
		size++;
	}

	return size;
}

int exit_check(char* sentence) {
	if (sentence[0] == 'e' && sentence[1] == 'x'&& sentence[2] == 'i' && sentence[3] == 't' &&sentence[4] == '\0') {
		printf("프로그램을 종료합니다.\n");
		return 1;
	}
	else return 0;
}