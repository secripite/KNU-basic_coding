#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define SIZE 5

char mine[SIZE][SIZE];
int scaner[SIZE + 2][SIZE + 2];

int main() {

    char temp;

    for (int i = 0; i < 5; i++) {
        scanf("%c%c%c%c%c", &mine[i][0], &mine[i][1], &mine[i][2], &mine[i][3], &mine[i][4]);
        scanf("%c", &temp);
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (mine[i][j] == 'x') {
                for (int n = -1; n < 2; n++) {
                    for (int m = -1; m < 2; m++) {
                        scaner[i + 1 + n][j + 1 + m]++;
                    }
                }
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (mine[i][j] == 'x') {
                scaner[i + 1][j + 1] = 'x' - '0';
            }
        }
    }
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            if (scaner[i][j] == 0)
                printf(" ");
            else
                printf("%c", scaner[i][j] + '0');
        }
        printf("\n");
    }
}