#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(){
    char mem_name[5][8] = {
        {"학생A"},
        {"학생B"},
        {"학생C"},
        {"학생D"},
        {"학생E"},
    };
    char members[5][20] = {
        {"2015000001"},
        {"2015000002"},
        {"2015000003"},
        {"2015000004"},
        {"2015000005"}};

    char name[10];
    int flag = -1;

    printf("학생의 이름을 입력하세요 : ");
    scanf("%s", name);

    for (int i = 0; i < 5;i++){
        if(strcmp(name,mem_name[i])==0){
            flag = i;
            break;
        }
    }

    if (flag == -1){
        printf("해당 학생은 목록에 없습니다.");
    }
    else{
        printf("해당 학생의 학번은 ");
        printf("%s",members[flag]);
        printf("입니다.");
    }
}