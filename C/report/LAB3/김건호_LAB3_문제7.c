#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	float hwa;

	printf("화씨온도를 입력하면 섭씨온도로 변환합니다.\n화씨온도를 입력 : ");
	scanf("%f", &hwa);
	printf("%f의 화씨온도를 섭씨로 변환하면 %f입니다.", hwa, (5 * (hwa - 32)) / 9);
}