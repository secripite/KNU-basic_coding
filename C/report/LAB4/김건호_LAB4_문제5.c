#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num,mask = 65535;

	printf("임의의 정수 입력 : ");
	scanf("%d", &num);
	printf("값 %d의 하위 2 바이트의 값을 16진수로 출력 : %x", num, num & mask);
}