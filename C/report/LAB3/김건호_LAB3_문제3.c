#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	char alpha;

	printf("알파벳 소문자 입력 : ");
	scanf("%c", &alpha);
	printf("입력한 알파벳 소문자 %c의 대문자는 %c\n", alpha, alpha - 32);
}