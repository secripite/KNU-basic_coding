#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void swap(int *x, int *y);

int main(){
    int x, y;
    printf("첫 번째 숫자를 입력하세요. -> ");
    scanf("%d", &x);
    printf("두 번째 숫자를 입력하세요. -> ");
    scanf("%d", &y);
    swap(&x, &y);
    printf("첫 번째 숫자는 %d 이고 두 번째 숫자는 %d입니다.", x, y);
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}