#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	char alpha;

	printf("���ĺ� �ҹ��� �Է� : ");
	scanf("%c", &alpha);
	printf("�Է��� ���ĺ� �ҹ��� %c�� �빮�ڴ� %c\n", alpha, alpha - 32);
}