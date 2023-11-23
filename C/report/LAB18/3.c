#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct person_
{
    char name[20];
    char tel[20];
    char address[80];
}person;

void swap(person* p1, person* p2);
void print(person* p1, person* p2);

int main() {
    FILE* fp;
    FILE* fp2;
    person thems[2];


    fopen_s(&fp, "input.txt", "r");
    if (fp == NULL)
    {
        perror("error fopen");
        return;
    }
    fopen_s(&fp2, "output.txt", "w");
    if (fp == NULL)
    {
        perror("error fopen");
        return;
    }

    for (int i = 0; i < 2; i++)
    {
        fscanf(fp, "%s %s %[^\n]s", thems[i].name, thems[i].tel, thems[i].address);
    }

    print(&thems[0], &thems[1]);
    swap(&thems[0], &thems[1]);
    print(&thems[0], &thems[1]);
    for (int  i = 0; i < 2; i++)
    {
        fprintf(fp2, "%s %s %s\n", thems[i].name, thems[i].tel, thems[i].address);
    }
    fclose(fp);
    fclose(fp2);
}


void swap(person* p1, person* p2) {
    person temp;

    strcpy(temp.name, p1->name);
    strcpy(temp.tel, p1->tel);
    strcpy(temp.address, p1->address);
    strcpy(p1->name, p2->name);
    strcpy(p1->tel, p2->tel);
    strcpy(p1->address, p2->address);
    strcpy(p2->name, temp.name);
    strcpy(p2->tel, temp.tel);
    strcpy(p2->address, temp.address);
}

void print(person* p1, person* p2) {

    printf("\t이름 \t전화번호 \t\t주소\n");
    printf("사람1 : %s %s %s\n", p1->name, p1->tel, p1->address);
    printf("사람2 : %s %s %s\n", p2->name, p2->tel, p2->address);
}