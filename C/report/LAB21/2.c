#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 20

// 0 black
// 1 white

int stack[MAX];
int top;

int pop();
void print_color_num();
void push(int value);
void input_rand_nums(int num);

int main() {
    char select = 'y';
    int num;

    srand(time(NULL));

    while (1)
    {
        if (select == 'n')
        {
            printf("program end.");
            break;
        }
        top = 0;
        printf("****************************\n");
        printf("input marble num : ");
        scanf("%d", &num);

        input_rand_nums(num);

        printf("result\n");
        print_color_num();
        printf("try again? [y/n] : ");
        scanf("%c", &select);
        scanf("%c", &select);

    }
}

void input_rand_nums(int num) {
    int temp;

    printf("created marbles : ");
    for (int i = 0; i < num; i++)
    {
        temp = rand() % 2;
        if (temp == 0) {
            printf("black ");
            push(0);
            push(0);
        }
        else {
            printf("white ");
            if (top == 0) {
                push(1);
            }
            else if (top == 1) {
                pop();
                push(1);
            }
            else {
                pop();
                pop();
                push(1);
            }
        }
        if (top >= MAX) {
            printf("\nStack overflow Error!\nput in the pocket!\n");
            return;
        }
    }
    printf("\nput in the pocket!\n");

}

int pop() {
    return stack[--top];
}

void print_color_num() {
    int Btemp = 0;
    int Wtemp = 0;
    while (top != 0)
    {
        switch (pop())
        {
        case 0:
            Btemp++;
            break;
        case 1:
            Wtemp++;
            break;
        }
    }
    printf("White marble : %d\n", Wtemp);
    printf("Black marble : %d\n", Btemp);
}

void push(int value) {
    if (top >= MAX) {
        return;
    }
    stack[top++] = value;
    return;
}