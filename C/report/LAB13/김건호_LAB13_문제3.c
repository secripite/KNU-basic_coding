#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct student_
{
    char name[20];
    int score;
    char grade[3];
    int scholarship;
}student;

void check_grade(student* info);

int main() {
    student value;

    printf("학생의 이름을 입력하세요 : ");
    scanf("%s", value.name);
    printf("학생이 받은 점수를 입력하세요 : ");
    scanf("%d", &value.score);

    check_grade(&value);

    printf("%s 학생의 등급은 %s이며 %d원의 장학금을 받습니다.", value.name, value.grade, value.scholarship);
}

void check_grade(student* info) {

    if (info->score >= 80) {
        strcpy(info->grade, "A");
        info->scholarship = 10000000;
    }
    else if (info->score >= 60)
    {
        strcpy(info->grade, "B");
        info->scholarship = 5000000;
    }
    else {
        strcpy(info->grade, "C");
        info->scholarship = 0;
    }
}