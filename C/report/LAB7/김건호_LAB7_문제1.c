#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void swap(int *num1,int *num2){
    int temp;

    temp = *(num1);
    *(num1) = *(num2);
    *(num2) = temp;
}

int main(){
    int num1, num2;

    printf("입력 : ");
    scanf("%d %d", &num1, &num2);
    swap(&num1, &num2);

    printf("swap 결과 : %d %d", num1, num2);
}