#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int cnt = 1, L_cnt = 1;
    char gchar, temp;
    int flag = 0;

    while (1)
    {
        if(flag == 0){
            printf("<< %d�ٿ� �Է��� ���ڿ����� ������ ��� >>\n", L_cnt++);
            flag = 1;
        }

        temp = gchar;
        gchar = getchar();
        
        if(temp == '\n' && gchar == EOF)
            break;
        else if((temp == '\n' && gchar != EOF))
            printf("<< %d�ٿ� �Է��� ���ڿ����� ������ ��� >>\n", L_cnt++);
        
        if(gchar == '.' || gchar == '!' || gchar == ',')
            printf("������ %d : %c\n", cnt++, gchar);
    }
    printf("\n�������� ���� ��� %d�� �Դϴ�.", --cnt);
}