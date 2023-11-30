#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct personscore {
    int number;
    char name[40];
    int mid, final, quiz;
};

typedef struct personscore pscore;

void search_score(pscore*, int);
void print(pscore*, int);

int main() {
    pscore student[20] = {
        {1, "kwon", 87, 98, 25},
        {2, "kim", 89, 78, 30},
        {3, "yang", 75, 87, 30},
        {4, "hong", 94, 75, 21}
    };
    int select;
    int flag = 0;
    int cnt = 4;
    print(student, cnt);

    while (1)
    {
        printf("search : 0, end&print : 1\n");
        scanf("%d", &select);

        switch (select)
        {
        case 0:
            search_score(student, cnt);
            break;
        case 1:
            flag = 1;
            break;
        }

        if (flag == 1)
            break;
    }


    print(student, cnt);
}

void print(pscore* p, int cnt) {
    printf("---------------------------------------\n");
    printf(" 번호\t이름\t중간\t기말\t퀴즈\n");
    printf("---------------------------------------\n");
    for (int i = 0; i < cnt; i++)
    {   
        printf("  %d\t%s\t%d\t%d\t%d\n", (p+i)->number, (p+i)->name, (p+i)->mid, (p+i)->final, (p+i)->quiz);
    }
    printf("---------------------------------------\n");
}

void search_score(pscore* p, int cnt) {

    int search_num;
    int i;

    printf("가장 큰 번호의 학생은 %d번 입니다. >>\n", cnt);
    printf("찾을 학생 번호를 입력하세요. >>\n");
    scanf("%d", &search_num);
    i = search_num - 1;
    printf("  %d\t%s\t%d\t%d\t%d\n", (p+i)->number, (p+i)->name, (p+i)->mid, (p+i)->final, (p+i)->quiz);
}