#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char word[100];
    int len = 0;
    printf("�� �ܾ �Է��ϼ���. ->\n");
    scanf("%s", word);
    printf("�Է��� �ܾ �ݴ�� ����մϴ�. -> \n");
    while (word[len] != '\0')
        len++;

    for (int i = len - 1; i >= 0;i--){
        printf("%c", word[i]);
    }
}