#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

static int global = 5000;
extern int getglobal();

int main()
{
    printf("���� ���� : global = %d\n", getglobal());
    printf("���� ���� ���� : global = %d\n", global);
    printf("���� ���� : global = %d\n", getglobal());
    printf("���� ���� ���� : global = %d\n", global);
}