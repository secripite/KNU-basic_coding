#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void frqtest (int x[]){
    int Max=0,Max_num;

    for(int i = 0; i < 10 ; i++){
        if(x[i]>Max){
            Max = x[i];
            Max_num = i;
        }
    }
    printf("0 ~ 9 �� ���� ���� ���� ���� %d �̰�, %d�� ���Խ��ϴ�.", Max_num,Max);
}


int main(){
    int memo[10]={0,};
    int num;

    printf("0���� 9������ ������ �Է��Ͻÿ�.\n");
    for(int i = 0; i < 20 ; i++){
        scanf("%d",&num);
        memo[num]++;
    }
    frqtest(memo);
}