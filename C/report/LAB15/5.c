#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    int **matrix;

    scanf("%d", &N);

    matrix = (int **)malloc(N * sizeof(int *));

    for (int i = 0; i < N;i++){
        matrix[i] = (int *)malloc(N * sizeof(int));
        for (int j = 0; j < N; j++){
            matrix[i][j] = i * N + j + 1;
        }
    }

    for (int i = 0; i < N;i++){
        for (int j = 0; j < N; j++){
            printf("%3d",matrix[i][j]);
        }
        printf("\n");
    }
}