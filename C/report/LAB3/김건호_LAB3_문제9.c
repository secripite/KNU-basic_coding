#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	float num1, num2;
	printf("삼각형의 면적을 구합니다.\n삼각형의 밑변 입력 : ");
	scanf("%f", &num1);
	printf("삼각형의 높이 입력 : ");
	scanf("%f", &num2);
	printf("입력한 밑변은\t%.2f 입니다.\n입력한 높이는\t%.2f 입니다.\n삼각형의 면적은\t%.2f 입니다.", num1, num2, (num1 * num2) / 2);
}