#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2, num3;

	printf("����1 �Է� : ");
	scanf("%d", &num1);
	printf("����2 �Է� : ");
	scanf("%d", &num2);
	printf("����3 �Է� : ");
	scanf("%d", &num3);

	printf("�Է��� ���� �߿��� ���� ū ���� ");

	num1 > num2 ? (num1 > num3 ? printf("%d", num1) : printf("%d", num3)) : num2 > num3 ? printf("%d", num2) : printf("%d", num3);
	printf("�Դϴ�.\n");
}