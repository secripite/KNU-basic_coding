#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int year, month;

	printf("��� ���� �Է��ϸ� ���� ��¥�� ����մϴ�.\n");
	printf("�� �Է� : ");
	scanf("%d", &year);
	printf("�� �Է� : ");
	scanf("%d", &month);

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("%d�� %d���� ������ 31�� �Դϴ�.", year, month);
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("%d�� %d���� ������ 30�� �Դϴ�.", year, month);
		break;
	case 2:
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			printf("%d�� %d���� ������ 29�� �Դϴ�.", year, month);
		else
			printf("%d�� %d���� ������ 28�� �Դϴ�.", year, month);
	}
}