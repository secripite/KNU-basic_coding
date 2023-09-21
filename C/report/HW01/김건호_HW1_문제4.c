#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int num;
	
	printf("정수를 입력하세요 : ");
	scanf("%d", &num);
	num = 63 ^ num;
	printf("연산의 결과는 %d입니다.\n", num);
}