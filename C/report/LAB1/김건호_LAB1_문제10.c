#include<stdio.h>

int main(void) {
	float pun;

	printf("면적을 평으로 입력하세요.<소수> >> ");
	scanf("%f", &pun);
	printf("%.6f 평은 %.6f 평방미터 입니다.\n", pun, pun * 3.3058);

	return 0;
}