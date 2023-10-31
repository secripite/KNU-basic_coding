#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void sort(char src[][100], int words_N);

int main() {
	char words[1000][100] = { 0, };
	char temp;
	int i = 0, j = 0;
	int cnt = 0;

	for (int i = 0; i < 5; i++) {
		j = 0;
		while (1)
		{
			temp = getchar();
			if (temp == '\n') {
				break;
				cnt++;
			}
			if (temp == ' ') {
				cnt++;
				j = 0;
				continue;
			}
			words[cnt][j] = temp;
			j++;
		}
	}

	sort(words, cnt);

	for (int i = 0; i < cnt; i++) {
		printf("%s\n", words[i]);
	}
}

void sort(char src[][100], int words_N) {
	char temp[100] = { 0, };
	for (int i = 0; i < words_N; i++) {
		for (int j = 0; j < words_N - i - 1; j++) {
			while (strcmp(src[j], src[j + 1]) > 0) {
				strcpy(temp, src[j]);
				strcpy(src[j], src[j + 1]);
				strcpy(src[j + 1], temp);
			}
		}
	}
}