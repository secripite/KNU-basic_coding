#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct person_
{
    char name[10];
    char phone_num[20];
    char adress[30];
}person;

int main(){
    person Human[2];
    strcpy(Human[0].adress, "����� ���α� ��ô��");
    strcpy(Human[0].name , "ȫ�浿");
    strcpy(Human[0].phone_num, "011-1111-1111");
    strcpy(Human[1].adress , "��⵵ �Ⱦ�� ��굿");
    strcpy(Human[1].name , "����ȣ");
    strcpy(Human[1].phone_num, "011-2222-2456");

    printf("\t�̸�\t��ȭ��ȣ\t\t�ּ�\n");
    for (int i = 0; i < 2;i++){
        printf("\t%s\t%s\t\t%s\n", Human[i].name, Human[i].phone_num, Human[i].adress);
    }
}
