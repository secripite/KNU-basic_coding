#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int money, flag;
	float result = 0;

	printf("연봉 입력 : ");
	scanf("%d", &money);
	printf("\t입력한 연봉 : %d\n\n", money);

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
		printf("\t세금 36%% 적용 : %10.0f\n", (money - 80000000) * 0.36);
		money = 80000000;
	case 2:
		result += (money - 40000000) * 0.27;
		printf("\t세금 27%% 적용 : %10.0f\n", (money - 40000000) * 0.27);
		money = 40000000;
	case 3:
		result += (money - 10000000) * 0.18;
		printf("\t세금 18%% 적용 : %10.0f\n", (money - 10000000) * 0.18);
		money = 10000000;
	default:
		result += money * 0.09;
		printf("\t세금  9%% 적용 : %10.0f\n", money * 0.09);
		break;
	}
	printf("\t전체 세금은   : %10.0f입니다.\n",result);
}