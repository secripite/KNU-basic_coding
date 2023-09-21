#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int num,flag = 0;

	printf("소수를 검사할 정수 입력 : ");
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
		printf("정수 %d<은>는 소수가 아닙니다.", num);
	}
	else
	{
		printf("정수 %d<은>는 소수입니다.", num);
	}
}