#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int num;

	printf("���� �Է� : ");
	scanf("%d", &num);
	
	if (num >= 0) {
		printf("�Է��� �� %d�� ���밪�� %d �Դϴ�.", num, num);
	}
	else{
		printf("�Է��� �� %d�� ���밪�� %d �Դϴ�.", num, -num);
	}
}