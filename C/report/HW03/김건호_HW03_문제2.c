#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int *BinToInt(char *bin);

int main(){
    char bin[32];
    int *Ip;

    gets(bin);

    Ip = BinToInt(bin);

    printf("%3d.%3d.%3d.%3d", *Ip, *(Ip + 1), *(Ip + 2), *(Ip + 3));
}

int *BinToInt(char *bin){
    char *ptr = bin;
    int temp;
    int IP[4];
    for (int i = 0; i < 4; i++){
        temp = 0;
        for (int j = 0; j < 8; j++){
            if(*ptr == '1'){
                temp += 128 >> j;
            }
            ptr++;
        }
        IP[i] = temp;
    }
    int *point = IP;
    return point;
}