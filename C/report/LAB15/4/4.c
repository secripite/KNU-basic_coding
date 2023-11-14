#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node_ {
    char name[20];
    float value1;
    float value2;
    int end;
    struct node_* next;
} node;

node* new_node() {
    node* Node = (node*)malloc(sizeof(node));

    Node->name;
    Node->value1 = 0;
    Node->value2 = 0;
    Node->end = 0;
    Node->next = NULL;
    return Node;
}

void Insert(node* head, char* name, float num1, float num2);
float search(node* head);

int main() {
    node* head = new_node();

    head->end = 1;

    FILE* fp;
    FILE* fp2;
    char name[30];
    float num1;
    float num2;
    float result;

    fopen_s(&fp, "input.txt", "r");
    if (fp == NULL)
    {
        perror("error fopen");
        return;
    }
    fopen_s(&fp2, "output.txt", "w");
    if (fp == NULL)
    {
        perror("error fopen");
        return;
    }

    for (int i = 0; i < 6; i++) {
        fscanf(fp, "%s %f %f\n", name, &num1, &num2);
        Insert(head, name, num1, num2);
    }

    for (int i = 0; i < 6; i++) {
        result = search(head);
        fprintf(fp2, "%s %.1f %.1f %.1f\n", head->name, head->value1, head->value2, result);
        printf("%d %s %.1f %.1f %.1f\n", i+1, head->name, head->value1, head->value2, result);
        head = head->next;
    }

    fclose(fp);
    fclose(fp2);
}


void Insert(node* head, char* nameV, float num1, float num2) {
    node* cur = head;
    while (1) {
        if (cur->end == 1) {
            cur->end = 0;
            cur->value1 = num1;
            cur->value2 = num2;
            strcpy(cur->name, nameV);
            cur->next = new_node();
            cur->next->end = 1;
            return;
        }
        cur = cur->next;
    }
}

float search(node* head) {
    node* cur = head;

    return cur->value1 + cur->value2;
}
