#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char sentence[100000];
	int cnt = 0;

	printf("문자열을 입력하세요. : ");
	gets(sentence);

	while (sentence[cnt] != '\0')
	{
		cnt++;

	}
	printf("문자열의 길이는  %d입니다.", --cnt);
}