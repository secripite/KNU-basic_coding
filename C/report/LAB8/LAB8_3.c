#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define swap(x,y,t) ((t)=(x)),((x)=(y)),((y)=(t))

void sort(int matrix[][5]){
    int temp;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5;j++){
            for (int n = 0; n < 4 - j;n++){
                if(matrix[i][n] >= matrix[i][n+1]){
                    temp = matrix[i][n];
                    matrix[i][n] = matrix[i][n + 1];
                    matrix[i][n + 1] = temp;
                }
            }
        }
    }
}



int main(){
    int matrix[5][5], result_cnt = 0, sum_temp;
    int matrix_sum[5], matrix_num[5] = {0, 1, 2, 3, 4};
    int sort_temp;

    printf("이차원 배열 입력 :\n");
    for (int i = 0; i < 5;i++)
        scanf("%d %d %d %d %d", &matrix[i][0], &matrix[i][1], &matrix[i][2], &matrix[i][3], &matrix[i][4]);

    sort(matrix);
    for (int i = 0; i < 5;i++){
        sum_temp = 0;
        for (int j = 0; j < 5;j++)
        {
            sum_temp += matrix[i][j];
        }
        matrix_sum[i] = sum_temp;
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4 - i;j++){
            if(matrix_sum[j] >= matrix_sum[j+1]){
                swap(matrix_sum[j], matrix_sum[j + 1],sort_temp);
                swap(matrix_num[j], matrix_num[j + 1],sort_temp);
            }  
        }
    }
    printf("\n결과 : \n");
    for (int i = 0; i < 5;i++){
        for (int j = 0; j < 5; j++){
            printf("%d ", matrix[matrix_num[i]][j]);
        }
        printf("(total %d)\n", matrix_sum[i]);
    }
}