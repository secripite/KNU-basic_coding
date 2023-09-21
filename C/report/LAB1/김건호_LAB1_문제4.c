#include<stdio.h>

int main(void) {
	int dad = 53, mom = 49, bro = 21, me = 19;

	printf("우리 가족이 현재까지 살아온 일 수는 %d일입니다.\n", dad * 365 + mom * 365 + bro * 365 + me * 365);

	return 0;
}