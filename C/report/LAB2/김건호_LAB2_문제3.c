#include<stdio.h>

int main(void) {
	int mile;
	float MtoKm = 1.6093;

	printf("�ӵ��� ���Ϸ� �Է��ϼ��� : ");
	scanf("%d", &mile);
	printf("%d������ %.2fų�ι����Դϴ�.", mile, mile * MtoKm);
}