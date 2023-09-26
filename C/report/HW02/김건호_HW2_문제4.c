#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

long long sum(long long num1, long long num2){
    return num1 + num2;
}

long long minus(long long num1, long long num2){
    return num1 - num2;
}

int main(){
    long long num1, num2;

    printf("입력 : ");
    scanf("%lld %lld", &num1, &num2);

    printf("합 : %lld\n", sum(num1, num2));

    if(num1 > num2){
        printf("차 : %lld\n", minus(num1, num2));
    }
    else{
        printf("차 : %lld\n", minus(num2, num1));
    }
    

}