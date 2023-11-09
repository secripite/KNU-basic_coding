#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp;
	FILE* fp2;
	char str[100];


	fopen_s(&fp, "srcflie.txt", "r");
	if (fp == NULL)
	{
		perror("error fopen");
		return;
	}
	fopen_s(&fp2, "dstflie.txt", "w");
	if (fp == NULL)
	{
		perror("error fopen");
		return;
	}

	for(int i = 0; i < 3 ;i++)
	{
		fgets(str,100, fp);
		fputs(str, fp2);
	}
	fclose(fp);
	fclose(fp2);
}