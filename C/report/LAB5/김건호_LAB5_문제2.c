#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int num1, num2;
	char how;

	printf("�� ���� ������ ���� ���·� �Է��ϼ���.\n�����ڴ� 8����<+, -, *, /, %%, &, |, ^> ���� �ϳ����� �մϴ�.\n");
	printf("number1 ������ number2 \n\n");

	scanf("%d %c %d", &num1, &how, &num2);

	printf("\n>>>>>>>>�����\n");
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