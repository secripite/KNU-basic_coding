#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct food {
    char foodName[20];
    int calories;
} food;

void PrintInfo(food* food, int cal);


int main() {
    int cal;

    food eats[5] = {
        {"햄버거", 1000},
        {"불고기", 450},
        {"초밥", 410},
        {"라면", 500},
        {"곤약", 100} };
    scanf("%d", &cal);

    PrintInfo(eats, cal);
}

void PrintInfo(food* foodn, int cal) {
    food* foods = foodn;

    int nFood = 5;
    int calories = cal;
    int memo[5] = { 0, };

    for (int i = 0; i < nFood; i++) {
        if (foods[i].calories > calories) {
            memo[i] = 1;
        }
    }

    printf("%d칼로리 이상 : ", calories);
    for (int i = 0; i < nFood; i++) {
        if (memo[i] == 1) {
            printf("%s ", foods[i].foodName);
        }
    }
    printf("\n%d칼로리 미만 : ", calories);
    for (int i = 0; i < nFood; i++) {
        if (memo[i] == 0) {
            printf("%s ", foods[i].foodName);
        }
    }
};