#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){
    char line[50];
    char delimiter[] = "?!, ";
    int j = 0;
    char buff[40];

    printf("입력 : ");
    gets(line);
    printf("출력 : ");

    while(line[j]!='\0'){
        int i = 0;
        while(1){
            if(line[j] == ' '||line[j] == '?'||line[j] == '!'||line[j] == ','){
                buff[i] = '\0';
                break;
            }
            buff[i] = line[j];
            j++;
            i++;
        }
        for (; i >= 0;i--){
            printf("%c", buff[i]);
        }
        printf("%c", line[j]);
        j++;
    }
}