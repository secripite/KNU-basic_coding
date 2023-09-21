#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define YtoS(x) 365*24*60*60*x

int main(void) {
	printf("1년을 초로 환산하면 %d초 입니다.\n", YtoS(1));
}