#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){
    char subject[3][50] = {{"[C 프로그래밍]"}, {"[컴퓨터 개론]"}, {"[객체지향 프로그래밍]"}};
    int score[4][3] = {{30, 30, 40}, {78, 93, 88}, {98, 99, 75}, {69, 78, 85}};

    printf("\t\t%s\t%s\t%s\t합\n", subject[0], subject[1], subject[2]);
    for (int i = 0; i < 4;i++){
        printf("학생%d\t\t%d\t\t%d\t\t%d\t\t\t%d\n", i + 1, score[i][0], score[i][1], score[i][2], score[i][0] + score[i][1] + score[i][2]);
    }
}
