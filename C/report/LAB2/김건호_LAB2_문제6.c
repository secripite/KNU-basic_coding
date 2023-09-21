#include<stdio.h>

void swap(int x, int y);

int main(void) {
	int x, y;

	printf("두 개의 숫자를 입력하세요 : ");
	scanf("%d, %d", &x, &y);
	swap(x, y);
}

void swap(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("swap 결과 : %d, %d", x, y);
}