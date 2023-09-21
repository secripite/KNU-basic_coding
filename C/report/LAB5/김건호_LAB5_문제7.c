#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	for (int i = 1; i <= 10; i++) {
		printf("%2d ^ 2 =%5d  %2d ^ 3 =%5d\n", i, i * i, i, i * i * i);
	}
}