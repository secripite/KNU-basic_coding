#include<stdio.h>

int main(void) {
	int num;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);
	printf("%3dx%3d=%3d\n", num, 1, num * 1);
	printf("%3dx%3d=%3d\n", num, 2, num * 2);
	printf("%3dx%3d=%3d\n", num, 3, num * 3);
	printf("%3dx%3d=%3d\n", num, 4, num * 4);
	printf("%3dx%3d=%3d\n", num, 5, num * 5);
	printf("%3dx%3d=%3d\n", num, 6, num * 6);
	printf("%3dx%3d=%3d\n", num, 7, num * 7);
	printf("%3dx%3d=%3d\n", num, 8, num * 8);
	printf("%3dx%3d=%3d\n", num, 9, num * 9);
}