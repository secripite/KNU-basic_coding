#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int cnt = 1, L_cnt = 1;
    char gchar, temp;
    int flag = 0;

    while (1)
    {
        if(flag == 0){
            printf("<< %d줄에 입력한 문자열에서 구두점 출력 >>\n", L_cnt++);
            flag = 1;
        }

        temp = gchar;
        gchar = getchar();
        
        if(temp == '\n' && gchar == EOF)
            break;
        else if((temp == '\n' && gchar != EOF))
            printf("<< %d줄에 입력한 문자열에서 구두점 출력 >>\n", L_cnt++);
        
        if(gchar == '.' || gchar == '!' || gchar == ',')
            printf("구두점 %d : %c\n", cnt++, gchar);
    }
    printf("\n구두점의 수는 모두 %d개 입니다.", --cnt);
}