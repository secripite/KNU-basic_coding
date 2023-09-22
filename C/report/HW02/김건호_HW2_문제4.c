#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){
    char num1[20]={0,}, num2[20]={0,}, sum_result[20]={0,},minus_result[20]={0,};
    int len_num1 = 0, len_num2 = 0, i=0, j=0;

    printf("ют╥б : ");
    scanf("%s %s", num1, num2);
    
    while(num1[i]!='\0'){
        i++;
        len_num1++;
    }

    while(num2[j]!='\0'){
        j++;
        len_num2++;
    }



    if(len_num1 > len_num2)
        for(;)
    else if(len_num1 < len_num2)
    else
    
    printf("%s %s", num1, num2);

}