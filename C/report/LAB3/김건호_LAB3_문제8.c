#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int num1, num2;

	printf("�� ������ �Է��Ͻÿ�.\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("��   : %d + %d = %d\n", num1, num2, num1 + num2);
	printf("��� : %d /  2 = %f", num1 + num2, (float)(num1 + num2) / 2);
}