#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	float num;
	printf("반올림할 소수를 입력하세요 : ");
	scanf("%f", &num);
	printf("반올림하면 일의 자리 ");

	((int)(num * 10) % 10) >= 5 ? printf("숫자가 커집니다.\n") : printf("숫자는 그대로입니다.\n");
}