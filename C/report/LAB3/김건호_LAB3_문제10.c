#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define phi 3.14

int main(void) {
	float rad;

	printf("원의 면적과 둘레를 구합니다.\n원의 반지름 입력 : ");
	scanf("%f", &rad);
	printf("원의 면적은\t%.3f 입니다.\n원의 둘레는\t%.3f 입니다.", phi * rad * rad, phi * rad * 2);
}