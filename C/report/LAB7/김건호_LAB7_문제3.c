#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int sum[3][3],minus[3][3],multiply[3][3];

void sum_(int matrix1[][3], int matrix2[][3]){
    
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
void minus_(int matrix1[][3], int matrix2[][3]){
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            minus[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}
void multifly_high(int matrix1[][3], int matrix2[][3]){
    int temp;

    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            temp = 0;
            for (int n = 0; n < 3;n++){
                temp += matrix1[i][n] * matrix2[n][j];
            }
            multiply[i][j] = temp;
        }
    }
}

int main(){
    int matrix1[3][3], matrix2[3][3];

    printf("첫번째 행렬 입력 :\n");
    for (int i = 0; i < 3;i++)
        scanf("%d %d %d", &matrix1[i][0], &matrix1[i][1], &matrix1[i][2]);
    printf("두번째 행렬 입력 :\n");
    for (int i = 0; i < 3;i++)
        scanf("%d %d %d", &matrix2[i][0], &matrix2[i][1], &matrix2[i][2]);

    sum_(matrix1, matrix2);
    minus_(matrix1, matrix2);
    multifly_high(matrix1, matrix2);

    printf("행렬의 합 :\n");
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    printf("행렬의 차 :\n");
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++)
            printf("%d ", minus[i][j]);
        printf("\n");
    }
    printf("행렬의 곱 :\n");
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++)
            printf("%d ", multiply[i][j]);
        printf("\n");
    }
}