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

    printf("�Է� : ");
    scanf("%d %d", &num1, &num2);
    swap(&num1, &num2);

    printf("swap ��� : %d %d", num1, num2);
}