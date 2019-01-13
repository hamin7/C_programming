//2014005032_������

#include<stdio.h>

int matching(char* sentence, char* pattern);//���ڿ� ��Ī �Լ�
int size_check(char* sentence); //���ڿ� ���� ��ȯ
int exit_check(char* sentence); //���� �Լ�

int main() {
	char sentence[100]; //���ڿ�
	char pattern[100]; //�˻�����

	while (1) { //exit ���ö� ���� ���ѷ���
		printf("���ڿ� : ");
		scanf("%s", sentence);
		if (exit_check(sentence)) break;
		printf("�˻����� : ");
		scanf("%s", pattern);
		if (exit_check(pattern)) break; //���ڿ�, �˻����� �� �� �ϳ��� exit�� �ԷµǸ� ����

		if (matching(sentence, pattern) == 1) printf("���Ͽ� �½��ϴ�.\n");
		else printf("���Ͽ� ���� �ʽ��ϴ�.\n");

		printf("\n");
	}

	return 0;
}

int matching(char* sentence, char* pattern) {
	int s_index = 0, p_index = 0; // s_index ���ڿ� �ε���, p_index �˻����� �ε���
	int s_size = size_check(sentence);
	int p_size = size_check(pattern);
	int flag = -1;

	while (1) {
		if (s_index == s_size || p_index == p_size) break; //���ڿ�, �˻����� ���� �ϳ��� ���� �������� ��� ����Ż��

		if (sentence[s_index] == pattern[p_index] || pattern[p_index] == '?') {
			s_index++;
			p_index++;
		} //�ش� �ε����� �����ڰ� �����ϰų�, '?'�� ������ ��� ���� index�� �ٽ� ���� 
		else if (pattern[p_index] == '*') break; //'*'�� ��� �߰� �۾��� ���� ���� Ż��
		else return -1;	//�� ���(��Ī,'?','*')�� �ƴҰ�� false
	}

	if (s_index == s_size && p_index == p_size) return 1; //���� ����
	else if (p_index == p_size - 1 && pattern[p_size - 1] == '*') return 1; //���Ͽ��� '*'�� �������� ��ġ�� ���, '*'���� ������ ������ ������ ���� ��Ī �Ǵ°��� Ȯ�� ����
	else if (s_index == s_size || p_index == p_size) return -1; //�� ���� ������ ���� ���� ��� false

	for (int i = s_index; i < s_size; i++) {
		flag = matching(&sentence[i], &pattern[p_index + 1]);
		if (flag == 1) break;
	} // '*'���ڰ� �߰��� �ִ� ��쿡 �ش� �ϰ�, '*'�� ��� ���ڸ� ���� ���� �� �� �����Ƿ�
	  //'*' ���� ���ڿ��� �ٽ� �Լ��� ȣ���Ͽ� ���Ѵ�. flag�� 1�� �ȴٸ� ��Ī ���� 
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
		printf("���α׷��� �����մϴ�.\n");
		return 1;
	}
	else return 0;
}