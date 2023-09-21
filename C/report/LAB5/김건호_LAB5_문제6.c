#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	for (int i = 0; i <= 200; i += 20) {
		printf("¼·¾¾¿Âµµ : %3d = È­¾¾¿Âµµ : %3.0f\n", i, ((float)i/5*9)+32);
	}
}