#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct person_
{
    char name[20];
    int age;
    char tel[20];
    char email[30];
}person;

void print(person*);

int main() {
    person info[2];

    for (int i = 0; i < 2; i++)
    {
        printf("person %d's info.\n", i+1);
        printf("name : ");
        scanf("%s", info[i].name);
        printf("age : ");
        scanf("%d", &info[i].age);
        printf("tel : ");
        scanf("%s", info[i].tel);
        printf("E-mail : ");
        scanf("%s", info[i].email);
        printf("\n");
    }

    print(info);
}

void print(person* information) {

    char* ptr;
    for (int i = 0; i < 2; i++)
    {
        printf("person %d : %s / %d / ", i+1, information[i].name, information[i].age);
        ptr = strtok(information[i].tel, "-");
        while (ptr != NULL)
        {
            printf("%s", ptr);
            ptr = strtok(NULL, "-");
        }
        ptr = strtok(information[i].email, "@");
        printf(" / %s\n", ptr);
    }

}