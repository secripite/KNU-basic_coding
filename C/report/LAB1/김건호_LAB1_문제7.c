#include<stdio.h>

int main(void) {
	int num1,num2;

	printf("정수1 입력? ");
	scanf("%d", &num1);
	printf("정수2 입력? ");
	scanf("%d", &num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d + %d = %d\n", num1, num2, num1 + num2);

	return 0;
}