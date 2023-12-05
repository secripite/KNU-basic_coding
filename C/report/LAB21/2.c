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
int get_color_num(int);
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
        printf("****************************\n");
        printf("input marble num : ");
        scanf("%d", &num);

        input_rand_nums(num);

        printf("result\n");
        printf("white marble : %d\n", get_color_num(1));
        printf("black marble : %d\n", get_color_num(0));
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
    }
    printf("\nput in the pocket!\n");

}

int pop() {
    return stack[--top];
}

int get_color_num(int index) {
    int temp = 0;
    for (int i = 0; i < top; i++)
    {
        if (stack[i] == index) {
            temp++;
        }
    }
    return temp;

}

void push(int value) {
    stack[top++] = value;
    return;
}