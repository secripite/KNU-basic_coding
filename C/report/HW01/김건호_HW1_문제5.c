#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	char spell;
	int ascil;
	
	printf("알파벳 소문자를 입력하세요 : ");
	scanf("%c", &spell);
	ascil = (int)spell - 96;
	ascil += 3;
	ascil %= 26;
	ascil += 96;
	printf("3글자 뒤의 알파벳은 %c\n", ascil);
}