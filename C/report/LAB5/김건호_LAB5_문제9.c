#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int num,flag = 0;

	printf("�Ҽ��� �˻��� ���� �Է� : ");
	scanf("%d", &num);

	if (num == 1) {
		flag = 1;
	}
	for (int i = 2; i < num; i++) {

		if (num % i == 0) {
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		printf("���� %d<��>�� �Ҽ��� �ƴմϴ�.", num);
	}
	else
	{
		printf("���� %d<��>�� �Ҽ��Դϴ�.", num);
	}
}