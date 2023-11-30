#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp;
	FILE* fp2;
	int N;
	int num1;
	int num2;

	fopen_s(&fp, "input.txt", "r");
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
	fscanf(fp, "%d\n", &N);

	for (int i = 0; i < N; i++)
	{
		fscanf(fp, "%d %d\n", &num1, &num2);
		printf("%d + %d = %d\n", num1, num2, num1 + num2);
		fprintf(fp2, "%d\n", num1 + num2);
	}
	fclose(fp);
	fclose(fp2);
}