#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void copyarray(double *source, double *target, int size);

int main(){
    double ary[5] = {3.12, 5.14, 7.25, 7.48, 5.91};
    double target[5];

    printf("�� ��� �� :\n");
    for (int i = 0; i < 5;i++){
        printf("%9.2f", ary[i]);
    }
    copyarray(ary, target, 5);
    printf("\n �Լ� copyarray() ȣ�� �� target �迭 ��:\n");

    for (int i = 0; i < 5;i++){
        printf("%9.2f", target[i]);
    }
    printf("\n");
}

void copyarray(double *source, double *target, int size){
    for (int i = 0; i < size;i++){
        target[i] = source[i];
    }
}