#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int num;

	printf("정수 입력 : ");
	scanf("%d", &num);
	
	if (num >= 0) {
		printf("입력한 수 %d의 절대값은 %d 입니다.", num, num);
	}
	else{
		printf("입력한 수 %d의 절대값은 %d 입니다.", num, -num);
	}
}