#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int printing(int num);

int main(void) {
	int num;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);
	printf("�ش� ������ �������� ");
	num = printing(num);
	num = printing(num);
	num = printing(num);
	num = printing(num);
	num = printing(num);
	num = printing(num);
}

int printing(int num) {
	printf("%d", num % 10);
	return num / 10;
}