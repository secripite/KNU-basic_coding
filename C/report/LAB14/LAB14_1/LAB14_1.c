#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp;
	FILE* fp2;
	char name[30];
	float num1;
	float num2;

	fopen_s(&fp, "tst.txt", "r");
	if (fp == NULL)
	{
		perror("error fopen");
		return;
	}
	fopen_s(&fp2, "output.txt", "w");
	if (fp == NULL)
	{
		perror("error fopen");
		return;
	}

	for(int i = 0; i< 6 ;i++)
	{
		fscanf(fp, "%s %f %f\n", name, &num1, &num2);
		fprintf(fp2, "%s %.1f %.1f %.1f\n", name, num1, num2, num1 + num2);
	}
	fclose(fp);
	fclose(fp2);
}