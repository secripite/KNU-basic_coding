#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int money, flag;
	float result = 0;

	printf("���� �Է� : ");
	scanf("%d", &money);
	printf("\t�Է��� ���� : %d\n\n", money);

	if (money >= 80000000)
		flag = 1;
	else if (money >= 40000000)
		flag = 2;
	else if (money >= 10000000)
		flag = 3;
	else
		flag = 4;

	switch (flag)
	{
	case 1:
		result += (money - 80000000) * 0.36;
		printf("\t���� 36%% ���� : %10.0f\n", (money - 80000000) * 0.36);
		money = 80000000;
	case 2:
		result += (money - 40000000) * 0.27;
		printf("\t���� 27%% ���� : %10.0f\n", (money - 40000000) * 0.27);
		money = 40000000;
	case 3:
		result += (money - 10000000) * 0.18;
		printf("\t���� 18%% ���� : %10.0f\n", (money - 10000000) * 0.18);
		money = 10000000;
	default:
		result += money * 0.09;
		printf("\t����  9%% ���� : %10.0f\n", money * 0.09);
		break;
	}
	printf("\t��ü ������   : %10.0f�Դϴ�.\n",result);
}