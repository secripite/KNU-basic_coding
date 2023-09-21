#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int year, month;

	printf("년과 월을 입력하면 말일 날짜를 출력합니다.\n");
	printf("년 입력 : ");
	scanf("%d", &year);
	printf("월 입력 : ");
	scanf("%d", &month);

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("%d년 %d월의 말일은 31일 입니다.", year, month);
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("%d년 %d월의 말일은 30일 입니다.", year, month);
		break;
	case 2:
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			printf("%d년 %d월의 말일은 29일 입니다.", year, month);
		else
			printf("%d년 %d월의 말일은 28일 입니다.", year, month);
	}
}