#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int money;

	printf("�ݾ��� �Է��ϼ��� : ");
	scanf("%d", &money);
	printf("�������� %d��\n",money/50000);
	money %= 50000;
	printf("������ %d��\n", money / 10000);
	money %= 10000;
	printf("õ���� %d��\n", money / 1000);
	money %= 1000;
	printf("���¥�� %d��\n", money / 100);
	money %= 100;
	printf("�ʿ�¥�� %d��\n", money / 10);
}