#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct person_
{
    char name[10];
    int age;
}person;


typedef struct professor_
{
    person info;
    char major[20];
} professor;

typedef struct student_
{
    person p;
    int id;
    char major[20];
    professor* pf;
} student;

int main() {
    student mem[2];
    professor they[2];

    for (int i = 0; i < 2; i++) {
        printf("학생%d의 정보를 입력하시오.\n", i + 1);
        printf("이름 : ");
        scanf("%s", mem[i].p.name);
        printf("나이 : ");
        scanf("%d", &mem[i].p.age);
        printf("학번 : ");
        scanf("%d", &mem[i].id);
        printf("전공 : ");
        scanf("%s", mem[i].major);
    }

    for (int i = 0; i < 2; i++) {
        printf("교수%d의 정보를 입력하시오.\n", i + 1);
        printf("이름 : ");
        scanf("%s", they[i].info.name);
        printf("나이 : ");
        scanf("%d", &they[i].info.age);
        printf("전공 : ");
        scanf("%s", they[i].major);
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (strcmp(mem[i].major, they[j].major) == 0) {
                mem[i].pf = &they[j];
                continue;
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        printf("%s / %d세 / %d / %s / 지도교수(%s) \n", mem[i].p.name, mem[i].p.age, mem[i].id, mem[i].major, &mem[i].pf->info.name);
    }

}