#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	float hwa;

	printf("ȭ���µ��� �Է��ϸ� �����µ��� ��ȯ�մϴ�.\nȭ���µ��� �Է� : ");
	scanf("%f", &hwa);
	printf("%f�� ȭ���µ��� ������ ��ȯ�ϸ� %f�Դϴ�.", hwa, (5 * (hwa - 32)) / 9);
}