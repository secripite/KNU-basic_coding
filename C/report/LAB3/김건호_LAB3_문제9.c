#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	float num1, num2;
	printf("�ﰢ���� ������ ���մϴ�.\n�ﰢ���� �غ� �Է� : ");
	scanf("%f", &num1);
	printf("�ﰢ���� ���� �Է� : ");
	scanf("%f", &num2);
	printf("�Է��� �غ���\t%.2f �Դϴ�.\n�Է��� ���̴�\t%.2f �Դϴ�.\n�ﰢ���� ������\t%.2f �Դϴ�.", num1, num2, (num1 * num2) / 2);
}