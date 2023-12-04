#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct person_
{
    struct person_ *next;
    char name[20];
    char tel[20];
    int end;
}person;

person* new_person() {
    person* PS = (person*)malloc(sizeof(person));

    PS->end = 0;
    return PS;
}

void insert(person* head, person info);

int main() {
    person info;

    person* head = new_person();
    head->end = 1;

    int cnt = 0;
    FILE* fp;

    fopen_s(&fp, "output.txt", "w");

    while (1)
    {
        scanf("%s", info.name);
        if (!strcmp(info.name, "exit") || cnt > 10)
        {
            break;
        }
        scanf("%s", info.tel);
        insert(head, info);
        cnt++;
    }

    while (1)
    {
        if (head->end == 1)
            break;

        fprintf(fp, "%s %s\n", head->name, head->tel);
        head = head->next;

    }

}


void insert(person* head, person info) {
    person* cur = head;

    while (1)
    {
        if (cur->end == 1) {
            strcpy(cur->name, info.name);
            strcpy(cur->tel, info.tel);
            cur->end = 0;
            cur->next = new_person();
            cur->next->end = 1;
            return;
        }
        cur = cur->next;
    }
}