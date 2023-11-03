#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct student_
{
    char name[10];
    char sudent_num[10];
    float score;
    char c_class[20];
    char dream[20];
}student;

int main() {
    student Humans[10] = {
        {"김영국", "9952203", 4.2, "전자상거래", "공무원"},
        {"강미연", "9952123", 3.5, "전자상거래", "회사원"},
        {"송은혜", "9952108", 3.2, "전자상거래", "회사원"},
        {"박보현", "9952115", 3.0, "전자상거래", "프로게이머"},
        {"김미경", "0052028", 4.1, "전자상거래", "웹마스터"},
        {"김형근", "0052029", 4.2, "전자상거래", "웹디자이너"},
        {"배태준", "0052030", 4.3, "전자상거래", "군 인"},
        {"김보름", "0052031", 4.3, "전자상거래", "웹디자이너"},
        {"서정순", "0052032", 3.5, "전자상거래", "웹마스터"},
        {"최종욱", "0052033", 3.7, "전자상거래", "DB관리자"} };

    printf("\t이  름\t학  번\t   학  점\t학  과\t     진  로\n");

    for (int i = 0; i < 10; i++)
    {
        printf("\t%s\t%s\t    %3.1f     %s     %8s\n", Humans[i].name, Humans[i].sudent_num, Humans[i].score, Humans[i].c_class, Humans[i].dream);
    }

}