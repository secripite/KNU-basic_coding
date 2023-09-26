#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

char sum_result[20],minus_result[20];

void sum(char* num1, int len1, char* num2, int len2){
    int temp = 0;

    do
    {
        if(len2 + 1){

            sum_result[len1] = (*(num1 + len1) + *(num2 + len2) - 96 + temp) % 10 + 48;
            if(*(num1 + len1) + *(num2 + len2) - 96 + temp >= 10)
                temp = 1;
            else
                temp = 0;
        }
        else{
            sum_result[len1] = (*(num1 + len1) - 48 + temp) % 10 + 48;
            if(*(num1 + len1) + temp - 48 >= 10)
                temp = 1;
            else
                temp = 0;
        }

        len1--;
        len2--;
    } while ((len1 + 1) || temp != 0);

    printf("%s\n", sum_result);
}

void minus(char* num1, int len1, char* num2, int len2){
    int temp = 0,i;

    do
    {
        if(len2 + 1){
            
            if(*(num1 + len1) - *(num2 + len2) < 0){
                temp = 10;
                i = 1;
                while(1)
                {
                    if(*(num1 + len1 - i) != '0'){
                        *(num1 + len1 - i) -= 1;
                        break;
                    }
                    else{
                        *(num1 + len1 - i) = 57;
                    }
                    i++;
                };

            }
            else{
                temp = 0;
            }
            minus_result[len1] = (*(num1 + len1) - *(num2 + len2) + temp + 48);
        }
        else{
            minus_result[len1] = *(num1 + len1);
        }
        len1--;
        len2--;

    } while (len1 + 1);

    printf("%s", minus_result);
}

int main(){
    char num1[20]={0,}, num2[20]={0,};
    int len_num1 = 0, len_num2 = 0;

    printf("입력 : ");
    scanf("%s %s", num1, num2);
    
    while(num1[len_num1]!='\0'){
        len_num1++;
    }
    len_num1--;
    while(num2[len_num2]!='\0'){
        len_num2++;
    }
    len_num2--;


    
    printf("합 : ");
    if(len_num1 >= len_num2)
        sum(num1, len_num1, num2, len_num2);
    else
        sum(num2, len_num2, num1, len_num1);
    
    
    printf("차 : ");
    if(len_num1 > len_num2)
        minus(num1, len_num1, num2, len_num2);
    else if(len_num1 < len_num2)
        minus(num2, len_num2, num1, len_num1);
    else{
        if(*(num1) > *(num2))
            minus(num1, len_num1, num2, len_num2);
        else
            minus(num2, len_num2, num1, len_num1);
    }
    
}