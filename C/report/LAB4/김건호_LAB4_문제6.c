#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2;

	printf("������ ���� �Է�1 : ");
	scanf("%d", &num1);
	printf("������ ���� �Է�2 : ");
	scanf("%d", &num2);
	printf("�Է� ��, x = %d, y = %d\n", num1, num2);
	num1 ^= num2;
	num2 ^= num1;
	num1 ^= num2;
	printf("���� ��, x = %d, y = %d", num1, num2);
}