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
    printf("0 ~ 9 중 가장 많이 나온 수는 %d 이고, %d번 나왔습니다.", Max_num,Max);
}


int main(){
    int memo[10]={0,};
    int num;

    printf("0에서 9까지의 정수를 입력하시오.\n");
    for(int i = 0; i < 20 ; i++){
        scanf("%d",&num);
        memo[num]++;
    }
    frqtest(memo);
}