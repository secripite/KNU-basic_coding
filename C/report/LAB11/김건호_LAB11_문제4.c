#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void sort(char src[][1000]);

int main() {
	char words[5][1000] = { 0, };
	char temp;
	int i = 0;

	for (int i = 0; i < 5; i++) {
		gets(words[i]);
	}

	sort(words);

	for (int i = 0; i < 5; i++) {
		printf("%s\n", words[i]);
	}
}

void sort(char src[][1000]) {
	char temp[1000] = { 0, };
	int N;
	for (int i = 0; i <5; i++) {
		for (int j = 0; j < 5 - i - 1; j++) {
			N = 0;
			while (src[j][N] == src[j+1][N])
				N++;
			if (src[j][N] > src[j + 1][N]) {
				strcpy(temp, src[j]);
				strcpy(src[j], src[j + 1]);
				strcpy(src[j + 1], temp);
			}
		}
	}
}