#include<stdio.h>

void swap(int x, int y);

int main(void) {
	int x, y;

	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf("%d, %d", &x, &y);
	swap(x, y);
}

void swap(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("swap ��� : %d, %d", x, y);
}