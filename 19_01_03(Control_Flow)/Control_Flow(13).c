#include <stdio.h>

int main() {
	int n, score;
	double avg;
	int total = 0;
	int cnt = 0;
	//for ( ; ; ) 가능
	//while(1==1) 가능
start:
	printf("성적을 입력하시오 : ");
	scanf("%d", &score);

	if (score != -1) {
		cnt++;
		total += score;
		goto start;
	}
	else if (score == -1)
	{
		goto end;
	}

end:
	avg = (double)total / cnt;
	printf("총 %d 명 \n", cnt);
	printf("총점 %d 점 \n", total);
	printf("평균 %.1lf 점 \n", avg);

	return 0;
}
