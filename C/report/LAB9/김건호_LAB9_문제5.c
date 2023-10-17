#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void change(int matrix[][4]);

int main(){
    int matrix[3][4] = {
        {5, 8, 9, 3},
        {20, 5, 23, 7},
        {30, 42, 4, 6}};
    printf("원 행렬 값 :\n");
    printf("-------------------------\n");
    for (int i = 0; i < 3; i++){
        printf("| ");
        for (int j = 0; j < 4;j++){
            printf("%3d", matrix[i][j]);
            printf(" | ");
        }
        printf("\n");
    }
    printf("-------------------------\n");

    change(matrix);
    printf("계산 후 행렬 값 :\n");
    printf("-------------------------\n");
    for (int i = 0; i < 3; i++){
        printf("| ");
        for (int j = 0; j < 4;j++){
            printf("%3d", matrix[i][j]);
            printf(" | ");
        }
        printf("\n");
    }
    printf("-------------------------\n");
}

void change(int matrix[][4]){
    for (int i = 0; i < 3;i++){
        matrix[i][0] = matrix[i][0] * 10 + 5;
        matrix[i][1] = matrix[i][1] * 10 + 5;
        matrix[i][2] = matrix[i][2] * 10 + 5;
        matrix[i][3] = matrix[i][3] * 10 + 5;
    }
}