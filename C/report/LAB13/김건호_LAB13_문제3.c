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

    printf("�л��� �̸��� �Է��ϼ��� : ");
    scanf("%s", value.name);
    printf("�л��� ���� ������ �Է��ϼ��� : ");
    scanf("%d", &value.score);

    check_grade(&value);

    printf("%s �л��� ����� %s�̸� %d���� ���б��� �޽��ϴ�.", value.name, value.grade, value.scholarship);
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