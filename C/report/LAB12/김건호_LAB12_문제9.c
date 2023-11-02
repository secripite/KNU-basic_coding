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

typedef struct student_
{
    person info;
    char sudent_num[10];
    float score;
    char class[20];
    char dream[20];
    professor profe;
} student;

int main() {
    student student_info[10] = {
        {{"김영국", "011-4567-9834", "서울시 도곡동"}, "9952203", 4.2, "전자상거래", "공무원", {{"최윤호", "011-2222-2456", "경기도 안양시 비산동"}, "전산과", {"c 언어", "자바입문"}}},
        {{"강미연", "011-4567-9834", "서울시 도화동"}, "9952123", 3.5, "전자상거래", "회사원", {{"홍길동", "011-1111-1111", "서울시 구로구 고척동"}, "전산과", {"객체지향", "분석설계"}}},
        {{"송은혜", "011-4567-9834", "서울시 고척동"}, "9952108", 3.2, "비지니스과", "회사원", {{"박종학", "011-3333-2456", "인천광역시 간석동"}, "전산과", {"컴퓨터개론", "프로그래밍"}}},
        {{"박보현", "011-4567-9834", "서울시 마곡동"}, "9952115", 3.0, "전자상거래", "프로게이머", {{"이종석", "016-3467-4389", "서울시 강남구 도곡동"}, "교양과", {"영어회화", "국어"}}},
        {{"김미경", "011-4567-9834", "서울시 화곡동"}, "0052028", 4.1, "전자상거래", "웹마스터", {{"신용현", "017-2222-2456", "경기도 일산시 화곡동"}, "교양과", {"기초수학", "이산수학"}}},
        {{"김형근", "011-4567-9834", "서울시 대치동"}, "0052029", 4.2, "비지니스과", "웹디자이너", {{"박종학", "011-3333-2456", "인천광역시 간석동"}, "전산과", {"컴퓨터개론", "프로그래밍"}}},
        {{"배태준", "011-4567-9834", "서울시 마장동"}, "0052030", 4.3, "전자상거래", "군 인", {{"홍길동", "011-1111-1111", "서울시 구로구 고척동"}, "전산과", {"객체지향", "분석설계"}}},
        {{"김보름", "011-4567-9834", "서울시 부평동"}, "0052031", 4.3, "전자상거래", "웹디자이너", {{"최윤호", "011-2222-2456", "경기도 안양시 비산동"}, "전산과", {"c 언어", "자바입문"}}},
        {{"서정순", "011-4567-9834", "서울시 도곡동"}, "0052032", 3.5, "비지니스과", "웹마스터", {{"이종석", "016-3467-4389", "서울시 강남구 도곡동"}, "교양과", {"영어회화", "국어"}}},
        {{"최종욱", "011-4567-9834", "서울시 도곡동"}, "0052033", 3.7, "비서과", "DB관리자", {{"박종학", "011-3333-2456", "인천광역시 간석동"}, "전산과", {"컴퓨터개론", "프로그래밍"}}} };

    printf("이 름\t전 화 번 호 \t 주 소 \t      학 번   평 점\t 학과 \t  진 로    지도교수\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%5s %15s%15s%8s%5.2f%12s%12s%10s\n", student_info[i].info.name, student_info[i].info.phone_num, student_info[i].info.adress, student_info[i].sudent_num, student_info[i].score, student_info[i].class, student_info[i].dream, student_info[i].profe.info.name);
    }

}