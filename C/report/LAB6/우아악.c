#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char a;
    printf("���� ���� �Է� : ");
    scanf("%c", &a);
    for (char i = a; i <= 'z'; i++) {
        for (char j = i; j < 'z'; j++) {
            printf(" ");
        }
        for (char j = 'z' - i + a; j <= 'z'; j++) {
            printf("%c", j);
        }
        printf("\n");
    }


}