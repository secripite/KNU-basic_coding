#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
	FILE* fp;
	FILE* fp2;
	char temp[100];


	fopen_s(&fp, argv[1], "r");
	if (fp == NULL)
	{
		perror("error fopen");
		return;
	}
	fopen_s(&fp2, argv[2], "a");
	if (fp2 == NULL)
	{
		perror("error fopen");
		return;
	}
	fputc('\n', fp2);
	while (feof(fp) == 0) {
		fgets(temp, 10000, fp);
		fputs(temp, fp2);
	}
	fclose(fp);
	fclose(fp2);
}