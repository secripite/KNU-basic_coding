#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp;

	char sentences[50][50];
	int max;
	int del;

	fopen_s(&fp, "data.txt", "r");
	if (fp == NULL)
	{
		perror("error fopen");
		return;
	}

	fscanf(fp, "%d\n", &max);

	for (int i = 0; i < max; i++)
	{
		fscanf(fp, "%s\n", sentences[i]);
	}
	fscanf(fp, "%d", &del);

	fclose(fp);

	fopen_s(&fp, "data.txt", "w");
	if (fp == NULL)
	{
		perror("error fopen");
		return;
	}

	fprintf(fp, "\n", "");
	for (int i = 0; i < max; i++)
	{
		if (i != del)
			fprintf(fp, "%s\n", sentences[i]);
	}


	fclose(fp);
}