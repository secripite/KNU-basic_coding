#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void PrintZ(int num);

int main(){
    int N;

    scanf("%d", &N);

    PrintZ(N);
}

void PrintZ(int num){
    for (int i = 0; i < num;i++){
        printf("*");
    }
    printf("\n");
    for (int j = 0; j < num - 2; j++){
        for (int n = 0; n < num - 2 - j; n++){
            printf(" ");
        }
        printf("*\n");
    }
    for (int i = 0; i < num;i++){
        printf("*");
    }
}