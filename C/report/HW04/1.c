#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct student_
{
    char number[10];
    char name[20];
    int kor;
    int eng;
    int math;
}student;


int main() {
    FILE* fp;
    FILE* fp2;
    student* members;
    int num;

    fopen_s(&fp, "input.txt", "r");

    fopen_s(&fp2, "output.txt", "w");
    fscanf(fp, "%d\n", &num);

    members = (student *)malloc(sizeof(student) * num);
    for (int i = 0; i < num; i++)
    {
        fscanf(fp, "%s %s %d %d %d", members[i].number, members[i].name, &members[i].kor, &members[i].eng, &members[i].math);
    }

    for (int i = 0; i < num; i++)
    {
        fprintf(fp2, "%s %s %d %d %d\n", members[i].number, members[i].name, members[i].math, members[i].kor, members[i].eng);
    }

    fclose(fp);
    fclose(fp2);
}