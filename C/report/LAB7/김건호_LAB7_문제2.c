#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define NUM 10

void sorting(int *num_arr){
    int temp;

    for (int i = 0; i <= NUM; i++)
    {
        for (int j = NUM - i; j < NUM-1; j++){
            if(*(num_arr+j) > *(num_arr+j+1)){
                temp = *(num_arr + j);
                *(num_arr + j) = *(num_arr + j + 1);
                *(num_arr + j + 1) = temp;
            }
        }
    }
}


int main(){
    int numbers[10];

    printf("�Է� : ");
    for (int i = 0; i < 10;i++){
        scanf("%d", &numbers[i]);
    }

    printf("���� ��� : ");
    sorting(numbers);
    for (int i = 0; i < 10;i++){
        printf("%d ", numbers[i]);
    }
}