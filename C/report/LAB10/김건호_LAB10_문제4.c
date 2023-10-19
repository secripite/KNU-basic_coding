#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){
    char ch;

    while((ch = getchar())!='\n'){
        if(ch >= 65 && ch <=90)
            putchar((ch - 65 + 3) % 26 + 65);
        else if(ch >= 97 && ch <=122)
            putchar((ch - 97 + 3) % 26 + 97);
        else if(ch >= 48 && ch <= 57)
            putchar((ch - 48 + 3) % 10 + 48);
        else
            putchar(ch);
    }
}