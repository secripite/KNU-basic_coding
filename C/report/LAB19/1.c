#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[]) {
	FILE* fp;

	fopen_s(&fp, argv[1], "w");
	if (fp == NULL)
	{
		perror("error fopen");
		return;
	}
	for (int i = 0; i < 3; i++)
	{
		fprintf(fp, "%s\n", argv[argc - i - 1]);
	}

	fclose(fp);
}