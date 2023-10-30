#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(){
    char ch;
    char tempCh;
    int cnt = 0;

    ch = getchar();
    tempCh = ch;
    cnt++;
    while ((ch = getchar()) != '\n')
    {
        if(tempCh != ch){
            printf("%d", cnt);
            cnt = 0;
            tempCh = ch;
        }
        cnt++;
    }
    printf("%d", cnt);
}