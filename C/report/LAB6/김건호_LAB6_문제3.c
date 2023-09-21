#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int year, month, day;
	int deday, onday = 0;

	printf("날짜를 입력하시오(년 월 일) : ");
	scanf("%d %d %d", &year, &month, &day);

	deday = (year-1) / 4 - (year - 1) / 100 + (year - 1) / 400;

	for (int i = 1; i < month; i++) {
		switch (i)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			onday += 31;
			continue;
		case 4:
		case 6:
		case 9:
		case 11:
			onday += 30;
			continue;
		case 2:
			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
				onday += 29;
			else
				onday += 28;
		}
	}
	printf("%d일", ((year - 1) * 365) + deday + onday + day);
}