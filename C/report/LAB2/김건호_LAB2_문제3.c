#include<stdio.h>

int main(void) {
	int mile;
	float MtoKm = 1.6093;

	printf("속도를 마일로 입력하세요 : ");
	scanf("%d", &mile);
	printf("%d마일은 %.2f킬로미터입니다.", mile, mile * MtoKm);
}