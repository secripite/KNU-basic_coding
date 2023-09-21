#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int score;

	printf("점수 입력 :");
	scanf("%d", &score);
	printf("입력한 점수 : %d, 학점 : ", score);

	if (score < 60)
		printf("F");
	else if (score < 65)
		printf("D0");
	else if (score < 70)
		printf("D+");
	else if (score < 75)
		printf("C0");
	else if (score < 80)
		printf("C+");
	else if (score < 85)
		printf("B0");
	else if (score < 90)
		printf("B+");
	else if (score < 95)
		printf("A0");
	else
		printf("A+");
}