#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int printing(int num);

int main(void) {
	int num;

	printf("정수를 입력하세요 : ");
	scanf("%d", &num);
	printf("해당 정수를 뒤집으면 ");
	num = printing(num);
	num = printing(num);
	num = printing(num);
	num = printing(num);
	num = printing(num);
	num = printing(num);
}

int printing(int num) {
	printf("%d", num % 10);
	return num / 10;
}