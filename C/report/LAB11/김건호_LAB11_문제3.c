#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int strist(char* src, char* ist, int index);

int main() {
	char src[10000] = { "Java is oriented language!" };
	char ist[100] = { "object" };
	int error = 1;
	printf("origin string : %s\n", src);
	printf("string to insert : %s\n", ist);

	error = strist(src, ist, 8);

	if (error == 0)
	{
		printf("result : %s", src);
	}
	else {
		printf("error!");
	}

}

int strist(char* src, char* ist, int index) {
	char temp[10000];

	strncpy(temp, src, index);
	temp[index] = '\0';
	strcat(temp, ist);
	strcat(temp, " ");
	strcat(temp, src + index);
	strcpy(src, temp);

	return 0;
}