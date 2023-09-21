#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int num1, num2;

	printf("두 정수 입력 :\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	if (num1 > num2) {
		printf("더한 결과 값 : %d + %d = %d", num1, num2, num1 + num2);
	}
	else {
		printf("곱한 결과 값 : %d * %d = %d", num1, num2, num1 * num2);
	}
}