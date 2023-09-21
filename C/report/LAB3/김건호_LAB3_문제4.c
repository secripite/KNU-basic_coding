#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	float num;

	printf("실수를 입력하세요 : ");
	scanf("%f", &num);
	printf("정수 부분은 %d입니다", (int)num);
}