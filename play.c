#include <stdio.h>

int main(){
    int num = 7;
    int num1 = 7;

    int num2 = num << 30;
    int num3 = (num << 31) >> 31;
    printf("%d\n", (num << 30));
    printf("%d", (num1 << 31) >> 31);
}