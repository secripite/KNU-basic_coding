#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num,mask = 65535;

	printf("������ ���� �Է� : ");
	scanf("%d", &num);
	printf("�� %d�� ���� 2 ����Ʈ�� ���� 16������ ��� : %x", num, num & mask);
}