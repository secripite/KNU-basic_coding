#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){
    int matrix[][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int (*ptr)[5];

    printf("원 행렬 값 :\n");
    printf("-------------------------------\n");
    for (int i = 0; i < 2; i++){
        printf("| ");
        for (int j = 0; j < 5;j++){
            printf("%3d", matrix[i][j]);
            printf(" | ");
        }
        printf("\n");
    }
    printf("-------------------------------\n");

    for (int i = 0; i < 2;i++){
        ptr = &matrix[i];
        for (int j = 0; j < 5;j++){
            (*ptr)[j] += 5;
        }
    }
    printf("계산 후 행렬 값 :\n");
    printf("-------------------------------\n");
    for (int i = 0; i < 2; i++){
        printf("| ");
        for (int j = 0; j < 5;j++){
            printf("%3d", matrix[i][j]);
            printf(" | ");
        }
        printf("\n");
    }
    printf("-------------------------------\n");
}