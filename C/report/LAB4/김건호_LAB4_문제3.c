#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2;

	printf("������ ���� �Է�1 : ");
	scanf("%d", &num1);
	printf("������ ���� �Է�2 : ");
	scanf("%d", &num2);

	num1 > num2 ? printf("���� %d �̰� ��������  %d�Դϴ�.", num1 / num2, num1 % num2) : printf("���� %d �̰� ��������  %d�Դϴ�.", num2 / num1, num2 % num1);

}