#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int W, T;

	printf("������ �Է� : ");
	scanf("%d", &W);
	printf("    Ű �Է� : ");
	scanf("%d", &T);
	printf("����� Ű�� �����Դ� %.2fcm�� %.2fkg���� ", (float)T, (float)W);
	
	W < (T - 100) * 0.9 || W == (T - 100) * 0.9 ? printf("�����Դϴ�.") : printf("���Դϴ�.");
}