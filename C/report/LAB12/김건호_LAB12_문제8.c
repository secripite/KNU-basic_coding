#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct person_
{
    char name[10];
    char phone_num[20];
    char adress[30];
}person;

typedef struct professor_
{
    person info;
    char class[20];
    char his_class[2][20];
} professor;

int main() {
    professor they[5] = {
        {{"ȫ�浿", "011-1111-1111", "����� ���α� ��ô��"}, "�����", {"��ü����", "�м�����"}},
        {{"����ȣ", "011-2222-2456", "��⵵ �Ⱦ�� ��굿"}, "�����", {"c ���", "�ڹ��Թ�"}},
        {{"������", "011-3333-2456", "��õ������ ������"}, "�����", {"��ǻ�Ͱ���", "���α׷���"}},
        {{"������", "016-3467-4389", "����� ������ ���"}, "�����", {"����ȸȭ", "����"}},
        {{"�ſ���", "017-2222-2456", "��⵵ �ϻ�� ȭ�"}, "�����", {"���ʼ���", "�̻����"}} };

    printf("  ��  ��  �� ȭ �� ȣ\t  ��  ��\t\t��  ��\t\t �� ��  �� ��\n");

    for (int i = 0; i < 5; i++) {
        printf("  %s %15s %20s %10s", they[i].info.name, they[i].info.phone_num, they[i].info.adress, they[i].class);
        for (int j = 0; j < 2; j++) {
            printf("%15s", they[i].his_class[j]);
        }
        printf("\n");
    }
}