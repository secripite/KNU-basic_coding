#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int money;

	printf("금액을 입력하세요 : ");
	scanf("%d", &money);
	printf("오만원권 %d장\n",money/50000);
	money %= 50000;
	printf("만원권 %d장\n", money / 10000);
	money %= 10000;
	printf("천원권 %d장\n", money / 1000);
	money %= 1000;
	printf("백원짜리 %d개\n", money / 100);
	money %= 100;
	printf("십원짜리 %d개\n", money / 10);
}