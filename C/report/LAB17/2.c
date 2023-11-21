#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void make_lotto(int* result);
int check_lotto(int* own, int* result);

int main() {
    int lotto[6];
    int result[6];
    int rank;

    printf("본인이 원하는 로또<1에서 45의 숫자 6개> 입력 ->\n");
    scanf("%d %d %d %d %d %d", &lotto[0], &lotto[1], &lotto[2], &lotto[3], &lotto[4], &lotto[5]);

    make_lotto(result);
    printf("로또를 추첨합니다 ->\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", result[i]);
    }

    rank = check_lotto(lotto, result);

    printf("\n\t\t %d개 맞았고,", rank);

    switch (rank)
    {
    case 6:
        printf("1등 입니다.\n");
        break;
    case 5:
        printf("2등 입니다.\n");
        break;
    case 4:
        printf("3등 입니다.\n");
        break;
    case 3:
        printf("4등 입니다.\n");
        break;
    case 2:
    case 1:
    case 0:
        printf("탈락 입니다.\n");
        break;
    }

}

void make_lotto(int* result) {
    int cnt = 0;
    int num;
    int memo[45] = { 0, };

    srand(time(NULL));

    while (cnt < 6)
    {
        num = rand() % 45;
        if (!memo[num]) {
            memo[num] = 1;
            result[cnt] = num + 1;
            cnt++;
        }
    }
}

int check_lotto(int* own, int* result) {
    int cnt = 0;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (own[i] == result[j]) {
                cnt++;
                break;
            }
        }
    }
    return cnt;
}