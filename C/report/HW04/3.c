#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node_ {
    char arr[20];
    struct Node_* next;
} Node;

Node* new_node() {
    Node* new = (Node*)malloc(sizeof(Node));

    strcpy(new->arr, "\0");

    return new;
}

void insert(Node* head, char* name);

int main() {

    Node* head = new_node();

    char name[20];

    for (int i = 0; i < 5; i++)
    {
        scanf("%s", name);
        insert(head, name);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%s -> ", head->arr);
        head = head->next;
    }
    printf("%s", head->arr);
}

void insert(Node* head, char* name) {
    Node* cur = head;

    while (1)
    {
        if (!strcmp(cur->arr, "\0"))
        {
            strcpy(cur->arr, name);
            cur->next = new_node();
            return;
        }
        cur = cur->next;
    }
}