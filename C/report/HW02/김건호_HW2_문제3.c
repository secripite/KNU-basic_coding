#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include <stdlib.h>


int main(){
    int memo[26]={0,};
    int cnt = 0,random;

    srand(time(NULL));

    while (cnt != 26)
    {
        random = rand() % 26;

        if(!memo[random]){
            printf("%c",random+97);
            memo[random] = 1;
            cnt++;
        }
    }
}