#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


typedef struct person_
{
    char name[20];
    char tel[20];
    char address[80];
}person;

typedef union reg_
{
    person man;
    char company[20];
}reg;

typedef struct car_
{
    char year[10];
    char kind[20];
    reg owner;
}car;

int main() {
    person info = { "홍길동", "011-1111-1111", "서울시 구로구 고척동" };
    char comp[20] = "인피니티북스";
    reg unionInfo = { "홍길동", "011-1111-1111", "서울시 구로구 고척동" };

    car cars[2] = {
        {"2004 09", "그랜져 GT", unionInfo},
        {"2006 04", "인피니티", unionInfo} };

    printf("   년 식               종 류                        주 인\n");
    printf("%10s %20s %10s %20s %30s\n", cars[0].year, cars[0].kind, unionInfo.man.name, unionInfo.man.tel, unionInfo.man.address);
    strcpy(unionInfo.company, comp);
    printf("%10s %20s %20s", cars[1].year, cars[1].kind, unionInfo.company);
}

