#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2;

	printf("임의의 정수 입력1 : ");
	scanf("%d", &num1);
	printf("임의의 정수 입력2 : ");
	scanf("%d", &num2);

	num1 > num2 ? printf("몫은 %d 이고 나머지는  %d입니다.", num1 / num2, num1 % num2) : printf("몫은 %d 이고 나머지는  %d입니다.", num2 / num1, num2 % num1);

}