#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int num;
	
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);
	num = 63 ^ num;
	printf("������ ����� %d�Դϴ�.\n", num);
}