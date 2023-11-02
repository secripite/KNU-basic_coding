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
        {{"홍길동", "011-1111-1111", "서울시 구로구 고척동"}, "전산과", {"객체지향", "분석설계"}},
        {{"최윤호", "011-2222-2456", "경기도 안양시 비산동"}, "전산과", {"c 언어", "자바입문"}},
        {{"박종학", "011-3333-2456", "인천광역시 간석동"}, "전산과", {"컴퓨터개론", "프로그래밍"}},
        {{"이종석", "016-3467-4389", "서울시 강남구 도곡동"}, "교양과", {"영어회화", "국어"}},
        {{"신용현", "017-2222-2456", "경기도 일산시 화곡동"}, "교양과", {"기초수학", "이산수학"}} };

    printf("  이  름  전 화 번 호\t  주  소\t\t학  과\t\t 담 당  과 목\n");

    for (int i = 0; i < 5; i++) {
        printf("  %s %15s %20s %10s", they[i].info.name, they[i].info.phone_num, they[i].info.adress, they[i].class);
        for (int j = 0; j < 2; j++) {
            printf("%15s", they[i].his_class[j]);
        }
        printf("\n");
    }
}