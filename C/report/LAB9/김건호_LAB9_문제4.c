#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void swap(int *x, int *y);

int main(){
    int x, y;
    printf("ù ��° ���ڸ� �Է��ϼ���. -> ");
    scanf("%d", &x);
    printf("�� ��° ���ڸ� �Է��ϼ���. -> ");
    scanf("%d", &y);
    swap(&x, &y);
    printf("ù ��° ���ڴ� %d �̰� �� ��° ���ڴ� %d�Դϴ�.", x, y);
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}