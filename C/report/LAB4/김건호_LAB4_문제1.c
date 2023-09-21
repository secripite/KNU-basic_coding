#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2, num3;

	printf("정수1 입력 : ");
	scanf("%d", &num1);
	printf("정수2 입력 : ");
	scanf("%d", &num2);
	printf("정수3 입력 : ");
	scanf("%d", &num3);

	printf("입력한 정수 중에서 가장 큰 수는 ");

	num1 > num2 ? (num1 > num3 ? printf("%d", num1) : printf("%d", num3)) : num2 > num3 ? printf("%d", num2) : printf("%d", num3);
	printf("입니다.\n");
}