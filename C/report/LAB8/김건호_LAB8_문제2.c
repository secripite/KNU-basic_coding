#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int vertical_check(int matrix[][5]){
    int temp , temp_num;
    int flag , cnt = 0;

    for (int i = 0;i < 5; i++){
        flag = 1;
        temp_num = 0;
        temp = matrix[temp_num][i];
        while (temp_num < 5)
        {
            if(temp != matrix[temp_num][i]){
                flag = 0;
                break;
            }
            temp_num++;
        }
        if(flag == 1)
            cnt++;
    }
    return cnt;
}

int horizontal_check(int matrix[][5]){
    int temp , temp_num;
    int flag , cnt = 0;

    for (int i = 0;i < 5; i++){
        flag = 1;
        temp_num = 0;
        temp = matrix[i][temp_num];
        while (temp_num < 5)
        {
            if(temp != matrix[i][temp_num]){
                flag = 0;
                break;
            }
            temp_num++;
        }
        if(flag == 1)
            cnt++;
    }
    return cnt;
}

int cross_check(int matrix[][5]){
    int temp, flag, temp_num, cnt = 0;

    flag = 1;
    temp = matrix[0][0];
    temp_num = 0;
    while(temp_num < 5){
        if(temp!=matrix[temp_num][temp_num]){
            flag = 0;
            break;
        }
        temp_num++;
    }
    if(flag == 1)
        cnt++;
    
    flag = 1;
    temp = matrix[4][4];
    temp_num = 0;
    while(temp_num < 5){
        if(temp!=matrix[temp_num][4-temp_num]){
            flag = 0;
            break;
        }
        temp_num++;
    }
    if(flag == 1)
        cnt++;

    return cnt;
}

int main(){
    int matrix[5][5], result_cnt = 0;

    printf("이차원 배열 입력 :\n");
    for (int i = 0; i < 5;i++)
        scanf("%d %d %d %d %d", &matrix[i][0], &matrix[i][1], &matrix[i][2], &matrix[i][3], &matrix[i][4]);

    result_cnt += vertical_check(matrix);
    result_cnt += horizontal_check(matrix);
    result_cnt += cross_check(matrix);

    printf("Total %d Bingo", result_cnt);
}