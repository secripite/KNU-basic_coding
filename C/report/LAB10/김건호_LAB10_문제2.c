#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(){
    char mem_name[5][8] = {
        {"�л�A"},
        {"�л�B"},
        {"�л�C"},
        {"�л�D"},
        {"�л�E"},
    };
    char members[5][20] = {
        {"2015000001"},
        {"2015000002"},
        {"2015000003"},
        {"2015000004"},
        {"2015000005"}};

    char name[10];
    int flag = -1;

    printf("�л��� �̸��� �Է��ϼ��� : ");
    scanf("%s", name);

    for (int i = 0; i < 5;i++){
        if(strcmp(name,mem_name[i])==0){
            flag = i;
            break;
        }
    }

    if (flag == -1){
        printf("�ش� �л��� ��Ͽ� �����ϴ�.");
    }
    else{
        printf("�ش� �л��� �й��� ");
        printf("%s",members[flag]);
        printf("�Դϴ�.");
    }
}