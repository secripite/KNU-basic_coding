#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){
    char subject[3][50] = {{"[C ���α׷���]"}, {"[��ǻ�� ����]"}, {"[��ü���� ���α׷���]"}};
    int score[4][3] = {{30, 30, 40}, {78, 93, 88}, {98, 99, 75}, {69, 78, 85}};

    printf("\t\t%s\t%s\t%s\t��\n", subject[0], subject[1], subject[2]);
    for (int i = 0; i < 4;i++){
        printf("�л�%d\t\t%d\t\t%d\t\t%d\t\t\t%d\n", i + 1, score[i][0], score[i][1], score[i][2], score[i][0] + score[i][1] + score[i][2]);
    }
}
