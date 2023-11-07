#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct account_
{
    int accountNum;
    char name[30];
    int depostit;
    int loan;
}account;



int main() {
    int N;
    account lists[10];
    int loanM = 0;
    int index = 0;
    scanf("%d", &N);



    for (int i = 0; i < N;i++){
        scanf("%d %s %d %d",&lists[i].accountNum, lists[i].name, &lists[i].depostit, &lists[i].loan);
        if (loanM < lists[i].loan)
        {
            loanM = lists[i].loan;
            index = i;
        }
    }

    printf("%d %s %d %d", lists[index].accountNum, lists[index].name, lists[index].depostit, lists[index].loan);
}
