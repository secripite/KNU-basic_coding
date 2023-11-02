#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char word[100];
    int len = 0;
    printf("한 단어를 입력하세요. ->\n");
    scanf("%s", word);
    printf("입력한 단어를 반대로 출력합니다. -> \n");
    while (word[len] != '\0')
        len++;

    for (int i = len - 1; i >= 0;i--){
        printf("%c", word[i]);
    }
}