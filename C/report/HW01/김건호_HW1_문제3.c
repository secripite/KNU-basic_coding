#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	float num;
	printf("�ݿø��� �Ҽ��� �Է��ϼ��� : ");
	scanf("%f", &num);
	printf("�ݿø��ϸ� ���� �ڸ� ");

	((int)(num * 10) % 10) >= 5 ? printf("���ڰ� Ŀ���ϴ�.\n") : printf("���ڴ� �״���Դϴ�.\n");
}