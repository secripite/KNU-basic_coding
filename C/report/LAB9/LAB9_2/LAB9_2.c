#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

static int global = 5000;
extern int getglobal();

int main()
{
    printf("전역 변수 : global = %d\n", getglobal());
    printf("정적 전역 변수 : global = %d\n", global);
    printf("전역 변수 : global = %d\n", getglobal());
    printf("정적 전역 변수 : global = %d\n", global);
}