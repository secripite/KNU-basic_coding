#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char stack[100];
int top;
int bottom;

void push(char alpa);
char pop();

int main(){
    char alpa;
    char words[100][100];
    int cnt = 0, i = 0, j = 0;
    

    printf("한 줄의 문장을 입력하세요. ->\n");

    while (1)
    {
        alpa = getchar();
        if(alpa == ' '){
            cnt++;
            i++;
            j = 0;
            continue;
        }
        if(alpa == '\n')
            break;
        words[i][j] = alpa;
        j++;
    }
    cnt = i;
    i = 0;
    j = 0;
    printf("입력한 각각의 단어를 반대로 출력합니다. ->\n");
    while (cnt >= 0)
    {
        while(words[i][j] != '\0'){
            push(words[i][j]);
            j++;
        }
        while (top != bottom)
        {
            printf("%c", pop());
        }
        printf(" ");
        cnt--;
        i++;
        j = 0;
    }
    

}

void push(char alpa){
    stack[top++] = alpa;
}
char pop(){
    return stack[--top];
}