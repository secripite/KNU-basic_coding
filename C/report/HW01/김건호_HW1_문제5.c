#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	char spell;
	int ascil;
	
	printf("���ĺ� �ҹ��ڸ� �Է��ϼ��� : ");
	scanf("%c", &spell);
	ascil = (int)spell - 96;
	ascil += 3;
	ascil %= 26;
	ascil += 96;
	printf("3���� ���� ���ĺ��� %c\n", ascil);
}