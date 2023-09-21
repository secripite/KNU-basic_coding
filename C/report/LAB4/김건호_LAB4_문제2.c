#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int W, T;

	printf("몸무게 입력 : ");
	scanf("%d", &W);
	printf("    키 입력 : ");
	scanf("%d", &T);
	printf("당신의 키와 몸무게는 %.2fcm와 %.2fkg으로 ", (float)T, (float)W);
	
	W < (T - 100) * 0.9 || W == (T - 100) * 0.9 ? printf("정상입니다.") : printf("비만입니다.");
}