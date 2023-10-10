#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int sum[4][3],minus[4][3];

void sum_(int matrix1[][3], int matrix2[][3]){
    
    for (int i = 0; i < 4;i++){
        for (int j = 0; j < 3;j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
void minus_(int matrix1[][3], int matrix2[][3]){
    for (int i = 0; i < 4;i++){
        for (int j = 0; j < 3;j++){
            minus[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}


int main(){
    int matrix1[4][3] = {
        {35, 28, 73},
        {25, 32, 69},
        {97, 56, 23},
        {45, 97, 15}};
    int matrix2[4][3] ={
        {125, 28, 56},
        {34, 32, 69},
        {57, 56, 59},
        {45, 33, 45}};

    printf("다음 두 행렬의 합과 차를 구하는 프로그램 입니다.\n");
    printf("----------------   ----------------\n");
    for(int i=0; i<4; i++){
        printf("| ");
        for(int j=0; j<3; j++){
            printf("%-3d", matrix1[i][j]);
            printf("| ");
        }

        printf(" ");

        printf(" | ");
        for(int j=0; j<3; j++){
            printf("%-3d", matrix2[i][j]);
            printf("| ");
        }
        printf("\n");
    }
    printf("----------------   ----------------\n\n");

    sum_(matrix1, matrix2);
    minus_(matrix1, matrix2);

    printf("위의 두 행렬 합의 결과 값입니다.\n");
    printf("----------------\n");
    for (int i = 0; i < 4;i++){
        printf("| ");
        for (int j = 0; j < 3;j++)
            {
                printf("%-3d", sum[i][j]);
                printf("| ");
            }
        printf("\n");
    }
    printf("----------------\n\n");
    printf("위의 두 행렬 차의 결과 값입니다.\n");
    printf("----------------\n");
    for (int i = 0; i < 4;i++){
        printf("| ");
        for (int j = 0; j < 3;j++)
        {
            printf("%-3d", minus[i][j]);
            printf("| ");
        }
        printf("\n");
    }
    printf("----------------\n");
}