#include<stdio.h>

float MtoKm(int mile);

int main(void) {
	int mile;

	printf("�ӵ��� ���Ϸ� �Է��ϼ��� : ");
	scanf("%d", &mile);
	printf("%d������ %.2fų�ι����Դϴ�.", mile, MtoKm(mile));
}

float MtoKm(int mile) {
	float MtoK = 1.6093;
	return mile * MtoK;
}