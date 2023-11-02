#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char word;

    printf("문자를 하나 입력하세요 -> ");
    scanf("%c", &word);
    printf("\n%c의 아스키 코드값은 십진수로 %d입니다.", word, word);
}