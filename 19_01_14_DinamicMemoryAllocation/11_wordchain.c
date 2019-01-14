#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char input[80];
	char **words = NULL;	// �����ձ� �ܾ �迭ó�� ������ 2��������
	int n = 0;			// ������� ������ �ܾ��� ��

	while (1) {
	loop_start:
		printf("�ܾ� �Է� : ");
		gets(input);
		if (strcmp(input, "end") == 0) {
			break;
		}
		if (n > 0) {
			int last_index = strlen(words[n - 1]) - 1;		// ������ �ܾ��� ������ ���� ��ġ
			if (words[n - 1][last_index] != input[0]) {
				// ������ �ܾ��� ������ ���ڿ� ���� �Էµ� �ܾ��� ù���ڰ� ���� �ʴٸ� ����
				printf("#### ���� �ձⰡ �Ұ����մϴ�.\n");
				continue;									// �ܾ �������� �ʰ� �ٽ� �Է��ϵ��� ��
			}
			for (int i = 0; i < n; i++) {
				if (strcmp(words[i], input) == 0) {
					// �Էµ� �ܾ� �� ���� �ܾ �ִٸ� ����
					printf("#### �̹� �Է��� �ܾ��Դϴ�.\n");
					goto loop_start;						// �ܾ �������� �ʰ� �ٽ� �Է��ϵ��� ��
					// while loop�� �ֻ������ �̵�
				}
			}
		}
		// ������� �Ѿ�Դٸ� �ܾ ��������
		n++;
		words = (char **)realloc(words, sizeof(char *) * n);	// 2�������� ���� �޸� �Ҵ�
		words[n - 1] = (char *)malloc(strlen(input) + 1);		// �ܾ ������ �޸� �Ҵ� (�ι��ڸ� ������ �������� Ȯ��)
		strcpy(words[n - 1], input);							// gets()�� �Է¹��� ���ڿ��� ����
	}

	// �����ձ� ��ü ����� ���
	for (int i = 0; i < n; i++) {
		printf("%s", words[i]);
		if (i < n - 1)
			printf(" - ");
	}
	printf("\n");

	// �׵��� �Ҵ� ���� �޸𸮸� ��� �ݳ�
	for (int i = 0; i < n; i++) {
		free(words[i]);
	}
	free(words);
}
