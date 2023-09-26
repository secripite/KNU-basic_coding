#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

char sum_result[22],minus_result[22];

void sum(char* num1, int len1, char* num2, int len2){
    int temp = 0, ptr = 20;

    do
    {
        if(len2 + 1){
            
            sum_result[ptr] = (*(num1 + len1) + *(num2 + len2) - 96 + temp) % 10 + 48;
            if(*(num1 + len1) + *(num2 + len2) - 96 + temp >= 10)
                temp = 1;
            else
                temp = 0;
        }
        else if(len1 + 1)
        {
            
            sum_result[ptr] = (*(num1 + len1) - 48 + temp) % 10 + 48;
            if(*(num1 + len1) + temp - 48 >= 10)
                temp = 1;
            else
                temp = 0;
        }
        else{
            if(temp == 0){
                break;
            }
            sum_result[ptr] = temp + 48;
            temp = 0;
        }

        len1--;
        len2--;
        ptr--;
    } while ((len1 + 1) >= 0 || temp != 0);

    sum_result[21] = '\0';

    for (int n = ptr+1; n < 22; n++){
        printf("%c", sum_result[n]);
    }
    printf("\n");
}

void minus(char* num1, int len1, char* num2, int len2){
    int temp = 0,i,ptr = 20,flag = 0;

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
            minus_result[ptr] = (*(num1 + len1) - *(num2 + len2) + temp + 48);
        }
        else{
            minus_result[ptr] = *(num1 + len1);
        }
        len1--;
        len2--;
        ptr--;
    } while (len1 + 1 >= 0);

    minus_result[21] = '\0';

    for (int n = ptr; n < 22; n++){
        if(flag == 0 && minus_result[n] == '0'){
            continue;
        }
        else{    
            printf("%c", minus_result[n]);
            flag = 1;
        }
    }
    //printf("%s", minus_result);
}

int main(){
    char num1[22]={0,}, num2[22]={0,};
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