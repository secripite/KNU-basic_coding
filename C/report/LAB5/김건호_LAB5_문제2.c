#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int num1, num2;
	char how;

	printf("두 수를 다음과 같은 형태로 입력하세요.\n연산자는 8가지<+, -, *, /, %%, &, |, ^> 중의 하나여야 합니다.\n");
	printf("number1 연산자 number2 \n\n");

	scanf("%d %c %d", &num1, &how, &num2);

	printf("\n>>>>>>>>결과는\n");
	if (how == '+') {
		printf("%d + %d = %d", num1, num2, num1 + num2);
	}
	else if (how == '-'){
		printf("%d - %d = %d", num1, num2, num1 - num2);
	}
	else if (how == '*'){
		printf("%d * %d = %d", num1, num2, num1 * num2);
	}
	else if (how == '/'){
		printf("%d / %d = %d", num1, num2, num1 / num2);
	}
	else if (how == '%') {
		printf("%d %% %d = %d", num1, num2, num1 % num2);
	}
	else if (how == '&') {
		printf("%d & %d = %d", num1, num2, num1 & num2);
	}
	else if (how == '|') {
		printf("%d | %d = %d", num1, num2, num1 | num2);
	}
	else if (how == '^') {
		printf("%d ^ %d = %d", num1, num2, num1 ^ num2);
	}
}