#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int num1, num2;

	printf("�� ���� �Է� :\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	if (num1 > num2) {
		printf("���� ��� �� : %d + %d = %d", num1, num2, num1 + num2);
	}
	else {
		printf("���� ��� �� : %d * %d = %d", num1, num2, num1 * num2);
	}
}