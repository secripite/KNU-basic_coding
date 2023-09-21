#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2;

	printf("임의의 정수 입력1 : ");
	scanf("%d", &num1);
	printf("임의의 정수 입력2 : ");
	scanf("%d", &num2);
	printf("입력 후, x = %d, y = %d\n", num1, num2);
	num1 ^= num2;
	num2 ^= num1;
	num1 ^= num2;
	printf("연산 후, x = %d, y = %d", num1, num2);
}