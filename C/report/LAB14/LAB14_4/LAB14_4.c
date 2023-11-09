#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
	FILE* fp;
	char temp[1000];
	char sentence[10000] = {NULL};
	int cNum = 0, wNum = 0, lNum = 0;

	fopen_s(&fp, argv[1], "r");
	if (fp == NULL)
	{
		perror("error fopen");
		return;
	}

	while (feof(fp) == 0) {
		fgets(temp, 10000, fp);
		strcat(sentence, temp);
	}
	
	fclose(fp);

	int i = 0;
	while (sentence[i] != '\0')
	{
		if (sentence[i] == '\n') {
			lNum++;
			wNum++;
		}
		else if (sentence[i] == ' ') {
			wNum++;
		}
		else {
			cNum++;
		}
		i++;
	}
	lNum++;
	wNum++;

	printf("\t\tAnalysis Result\n");
	printf("----------------------------------------------\n");
	printf("\t\tCount of Character : %10d\n", cNum);
	printf("\t\t     Count of Word : %10d\n", wNum);
	printf("\t\t     Count of Line : %10d\n", lNum);
}