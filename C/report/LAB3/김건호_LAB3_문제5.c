#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SQ2(x) ((x) * (x))
#define SQ4(x) ((SQ2(x)) * (SQ2(x)))

int main(void) {
	int num;
	
	printf("정수를 입력하시오 : ");
	scanf("%d", &num);
	printf("%d의 네제곱은 %d입니다\n", num, SQ4(num));
}