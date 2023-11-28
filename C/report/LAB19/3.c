#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 50

int size = 0;

typedef struct food_
{
    char name[20];
    int price;
}food[MAX];

int find_index(food*, char*);
void insert(food*);
void print(food*);
void delete(food*);
void update(food*);
void file_save(food*);
void file_read(food*);


int main(){
    int num;
    while (1)
    {
        printf("<<1.추가 2.삭제 3.수정 4.목록 5.파일 로드 6.저장 7.종료\n");
        printf("==>메뉴선택 : ");
        scanf("%d", &num);
    }
    
}

int find_index(food*, char*);
void insert(food*);
void print(food*);
void delete(food*);
void update(food*);
void file_save(food*);
void file_read(food*);
