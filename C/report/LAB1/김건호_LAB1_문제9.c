#include<stdio.h>

int main(void) {
	float L;

	printf("������ ���͸� �Է��ϼ���.<�Ҽ�> >> ");
	scanf("%f", &L);
	printf("%f ���ʹ� %.6f ���� �Դϴ�.\n", L, L / 3.785);

	return 0;
}