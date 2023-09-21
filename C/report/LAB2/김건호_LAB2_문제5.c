#include<stdio.h>

float MtoKm(int mile);

int main(void) {
	int mile;

	printf("속도를 마일로 입력하세요 : ");
	scanf("%d", &mile);
	printf("%d마일은 %.2f킬로미터입니다.", mile, MtoKm(mile));
}

float MtoKm(int mile) {
	float MtoK = 1.6093;
	return mile * MtoK;
}