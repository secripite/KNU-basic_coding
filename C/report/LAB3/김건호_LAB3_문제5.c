#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SQ2(x) ((x) * (x))
#define SQ4(x) ((SQ2(x)) * (SQ2(x)))

int main(void) {
	int num;
	
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &num);
	printf("%d�� �������� %d�Դϴ�\n", num, SQ4(num));
}