#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
	FILE* fp;
	char word[100];
	char sentece[1000] = { NULL };


	fopen_s(&fp, argv[1], "r");
	if (fp == NULL)
	{
		perror("error fopen");
		return;
	}
	printf("������ ���� ���� ��� : -->\n");
	for (int i = 0; i < 2; i++)
	{
		fgets(word, 100, fp);
		printf("%s", word);
		strcat(sentece, word);
	}
	fclose(fp);

	printf("\n����� ���� ���� ��� : -->\n");
	int i = 0;
	while (1) {
		if (sentece[i] == '\0')
			break;
		if (sentece[i] == '\n')
			printf("\n");
		if (sentece[i] >= 'a' && sentece[i] <= 'z') {
			printf("%c", sentece[i] - 32);
		}
		else if (sentece[i] >= 'A' && sentece[i] <= 'Z') {
			printf("%c", sentece[i] + 32);
		}
		i++;
	}
	printf("\n");
}