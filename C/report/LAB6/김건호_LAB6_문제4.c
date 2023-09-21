#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

char spell;

void printing(int num) {
	int i = (int)spell;

	if (num-1 == 122)
		return;
	printing(num + 1);
	for (; i < num; i++) {
		printf(" ");
	}
	for (; i < 123; i++) {
		printf("%c", i);
	}
	printf("\n");

}

int main() {
	

	printf("시작 문자 입력 : ");
	scanf("%c", &spell);

	printing((int)spell);
}