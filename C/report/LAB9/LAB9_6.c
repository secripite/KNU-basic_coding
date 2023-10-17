#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

float multiply_matrix[2][2];

void multiply(float matrix1[][3], float matrix2[][2]);

int main(){
    float matrix1[2][3] = {
        {4.2, 4.3, 3.8},
        {3.7, 1.5, 0.7}};
    float matrix2[3][2] = {
        {5.2, 2.1},
        {3.2, 1.4},
        {1.5, 3.6}};

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3;j++){
            printf("%7.2f", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2;j++){
            printf("%7.2f", matrix2[i][j]);
        }
        printf("\n");
    }
    multiply(matrix1, matrix2);
    printf("\n다음은 위 두 행렬의 곱 결과 입니다.\n\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2;j++){
            printf("%7.2f", multiply_matrix[i][j]);
        }
        printf("\n");
    }

}

void multiply(float matrix1[][3], float matrix2[][2])
{
    float temp;

    for (int i = 0; i < 2;i++){
        for (int j = 0; j < 2;j++){
            temp = 0;
            for (int n = 0; n < 3;n++){
                temp += matrix1[i][n] * matrix2[n][j];
            }
            multiply_matrix[i][j] = temp;
        }
    }
}
