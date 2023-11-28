#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define swap(x,y,t) ((t)=(x)),((x)=(y)),((y)=(t))
#define MAX 50

int size = 0;
int save_size = 0;

struct food_
{
    char name[20];
    int price;
}food[MAX];

int find_index(struct food*, char*);
void insert(struct food*);
void print(struct food*);
void delete(struct food*);
void update(struct food*);
void file_save(struct food*);
void file_load(struct food*);


int main() {
    int number;
    int flag = 0;

    while (1)
    {
        if (flag == 1)
            break;
        printf("<<1.추가 2.삭제 3.수정 4.목록 5.파일 로드 6.저장 7.종료\n");
        printf("==>메뉴선택 : ");
        scanf("%d", &number);

        switch (number)
        {
        case 1:
            insert(food);
            break;
        case 2:
            delete(food);
            break;
        case 3:
            update(food);
            break;
        case 4:
            print(food);
            break;
        case 5:
            file_load(food);
            break;
        case 6:
            file_save(food);
            break;
        case 7:
            flag = 1;
            break;
        }
    }
    print(food);
    int result = 0;
    for (int i = 0; i < size; i++) {
        result += food[i].price;
    }
    printf("%d", result);
}

int find_index(struct food* data, char* name) {
    int i = 0;
    while (i < size)
    {
        if (!strcmp(food[i].name, name)) {
            return i;
        }
        i++;
    }

}

void insert(struct food* data) {

    printf("음식 이름을 입력하세요 : ");
    scanf("%s", food[size].name);
    printf("음식 가격을 입력하세요 : ");
    scanf("%d", &food[size].price);
    size++;
}

void print(struct food* data) {
    for (int i = 0; i < size; i++)
    {
        printf("이름 : %s, 가격 : %d\n", food[i].name, food[i].price);
    }

}

void delete(struct food* data) {
    char name[20];
    int index;

    struct food_ temp;
    printf("삭제할 음식 제목을 입력하세요 : ");
    scanf("%s", name);
    index = find_index(food, name);
    for (int i = index; i < size - 1; i++)
    {
        strcpy(temp.name, food[i].name);
        temp.price = food[i].price;
        strcpy(food[i].name, food[i + 1].name);
        food[i].price = food[i + 1].price;
        strcpy(food[i + 1].name, temp.name);
        food[i + 1].price = temp.price;
    }
    size--;
}

void update(struct food* data) {
    char name[20];
    int price;
    int index;

    printf("수정할 음식 제목을 입력하세요 : ");
    scanf("%s", name);
    index = find_index(food, name);
    printf("수정할 가격을 입력하세요 : ");
    scanf("%d", &price);
    food[index].price = price;
}

void file_save(struct food* data) {
    FILE* fp;
    save_size = size;

    fopen_s(&fp, "food.txt", "w");
    if (fp == NULL)
    {
        perror("error fopen");
        return;
    }
    for (int i = 0; i < size; i++)
    {
        fprintf(fp, "%s %d\n", food[i].name, food[i].price);
    }

    fclose(fp);
}

void file_load(struct food* data) {
    FILE* fp;

    fopen_s(&fp, "food.txt", "r");
    if (fp == NULL)
    {
        perror("error fopen");
        return;
    }
    for (int i = 0; i < save_size; i++)
    {
        fscanf(fp, "%s %d\n", food[i].name, &food[i].price);
    }

    fclose(fp);
}
