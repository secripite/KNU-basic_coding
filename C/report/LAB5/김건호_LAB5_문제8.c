#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int cnt = 0;
	for (int i = 1; i <= 30; i++) {
		if (i % 2 != 0 && i % 5 != 0) {
			printf("%3d ", i);
			cnt++;
		}
		if (cnt > 3) {
			printf("\n");
			cnt = 0;
		}
			
	}
}