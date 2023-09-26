#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double oiler(int num){
    int temp = 1;
    for (int i = 1; i <= num;i++){
        temp *= i;
    }

    return 1.0 / temp;
}

int main(){
    double result = 1;
    double prev = 0;
    int num = 1;
    while(1)
    {
        prev = result;
        result += oiler(num);
        num++;
        if(result - prev < 0.000001){
            break;
        }
    }

    printf("%.6lf", result);
}
