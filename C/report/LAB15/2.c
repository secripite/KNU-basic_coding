#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PRINT(a, b)                            \
    {                                          \
        printf("a와 b의 곱은 %d입니다", a *b); \
    }

int main(){
    int a = 2, b = 7;
    PRINT(a, b);
}