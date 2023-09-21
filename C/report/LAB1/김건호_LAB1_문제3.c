#include<stdio.h>

int main(void) {
	int h = 5, min = 15;

	printf("%d시간 %d분은 %d초입니다.\n", h, min, h * 3600 + min * 60);

	return 0;
}