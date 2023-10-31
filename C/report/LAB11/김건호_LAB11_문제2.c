#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char sentence[100000];
	int cnt = 0;

	printf("문자열을 입력하세요. : ");
	gets(sentence);

	while (sentence[cnt] != '\0')
	{
		if (sentence[cnt] > 96 && sentence[cnt] < 123)
			sentence[cnt] -= 32;
		else if (sentence[cnt] > 64 && sentence[cnt] < 91)
			sentence[cnt] += 32 ;
		cnt++;
	}
	printf("%s", sentence);
}