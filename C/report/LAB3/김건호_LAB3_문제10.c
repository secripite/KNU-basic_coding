#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define phi 3.14

int main(void) {
	float rad;

	printf("���� ������ �ѷ��� ���մϴ�.\n���� ������ �Է� : ");
	scanf("%f", &rad);
	printf("���� ������\t%.3f �Դϴ�.\n���� �ѷ���\t%.3f �Դϴ�.", phi * rad * rad, phi * rad * 2);
}