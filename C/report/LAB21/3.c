#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 5

int queue[MAX];
int head;
int rear;
int size;

void enque(int);
int deque();
int empty_que();
void print_que();

int main() {
    int menu;
    int input_value;
    while (1)
    {
        printf("\n**********************************\n");
        printf("*1. AddQ                         *\n");
        printf("*2. DeleteQ                      *\n");
        printf("*3. List                         *\n");
        printf("*4. Exit                         *\n");
        printf("**********************************\n\n");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            if (size == MAX) {
                printf("Error!\n");
                continue;
            }
            printf("AddQ Data : ");
            scanf("%d", &input_value);
            enque(input_value);
            break;
        case 2:
            if (empty_que()) {
                printf("Error!\n");
                continue;
            }
            printf("DelateQ Data : %d\n", deque());
            break;
        case 3:
            print_que();
            break;
        case 4:
            printf("Exit");
            return;
        }
    }


}

void enque(int value) {
    rear = (rear + 1) % MAX;
    size++;
    queue[rear] = value;
}

int deque() {
    head = (head + 1) % MAX;
    size--;
    return queue[head];
}

int empty_que() {
    if (size == 0)
    {
        return 1;
    }
    else {
        return 0;
    }
}

void print_que() {
    printf("List :");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", queue[(head + 1 + i) % MAX]);
    }
    printf("\n");
}