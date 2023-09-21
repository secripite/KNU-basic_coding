#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define FtoC 30.48

int main(void) {
	float dis;
	char method;

	printf("입력한 거리를 변환합니다. 적당히 변환합니다.\n 문자 F나 f를 입력하면 센티미터로, 문자를 C나 c를 입력하면 피트로 변환합니다.\n\n");

	printf("문자 입력 : ");
	scanf("%c", &method);
	printf("숫자 입력 : ");
	scanf("%f", &dis);

	if (method == 'F' || method == 'f') {
		printf("\n피트 %.2f는 센티미터로 %.2f입니다.", dis, dis * FtoC);
	}
	else {
		printf("\n센티미터 %.2f는 피트로 %.2f입니다.", dis, dis / FtoC);
	}

}