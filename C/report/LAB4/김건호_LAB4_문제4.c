#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char alpha;

	printf("������ ���� �Է� : ");
	scanf("%c", &alpha);

	alpha > 96 && alpha < 123 ? printf("%c", alpha - 32) : (alpha > 64 && alpha < 91 ? printf("%c", alpha + 32) : printf("?"));
}