#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int stack[50];
int top = 0;

void push(int);
int pop();
void print_stack();

void trans_form(int, int);

int main() {
    int num;
    int form;

    printf("input : ");
    scanf("%d %d", &num, &form);

    trans_form(num, form);

    printf("output : ");
    print_stack();
}

void trans_form(int value, int form) {
    int temp;

    while (1)
    {
        temp = value % form;
        if (temp > 9) {
            push(temp - 10 + 'a');
        }
        else {
            push(temp + '0');
        }

        value /= form;

        if (value < form)
        {
            push(value > 9 ? value - 10 + 'a' : value + '0');
            return;
        }

    }
}

void push(int value) {
    stack[top++] = value;
}

int pop() {
    return stack[--top];
}

void print_stack() {
    while (top > 0)
    {
        printf("%c", pop());
    }

}