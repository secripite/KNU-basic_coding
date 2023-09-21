#include<stdio.h>

int main(void) {
	float L;

	printf("부피인 리터를 입력하세요.<소수> >> ");
	scanf("%f", &L);
	printf("%f 리터는 %.6f 갤론 입니다.\n", L, L / 3.785);

	return 0;
}