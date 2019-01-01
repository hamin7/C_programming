#include <stdio.h>     //   전처리

int main() {

	short sVar = 32000;
	int iVar = -2140000000;

	unsigned short usVar = 65000;
	unsigned int uiVar = 4200000000u;

	printf("%d \n", sVar);
	printf("%d \n", iVar);
	printf("%us \n", usVar);
	printf("%u \n", uiVar);

	long long dist1 = 2720000000000;
	__int64 dist2 = 4500000000000;
	printf("지구에서 천왕성 : %lld \n", dist1);
	printf("태양에서 해왕성 : %lld \n", dist2);

	return 0;
}

%x 대문자 소문자
