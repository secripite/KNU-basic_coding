#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 5
#define swap(x,y,t) ((t)=(x)),((x)=(y)),((y)=(t))

void primenumber(int* arr, int size, int* sortarr, int* primearr, int* primecnt);
void make_random(int*);
void bubble_sort(int*);
int check_prime(int num);

int main() {
    int nums[MAX];
    int sort_nums[MAX];
    int prime_nums[MAX];
    int prime_cnt = 0;
    int flag = 0;

    primenumber(nums, MAX, sort_nums, prime_nums, &prime_cnt);

    printf("난수 5개(1~20) : ");
    for (int i = 0; i < MAX; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    printf("오름차순 정렬 : ");
    for (int i = 0; i < MAX; i++) {
        printf("%d ", sort_nums[i]);
    }
    printf("\n");
    for (int i = 0; i < MAX; i++)
    {
        flag = 0;
        for (int j = 0; j < prime_cnt; j++) {
            if (sort_nums[i] == prime_nums[j]) {
                flag = 1;
                break;
            }
        }
        printf("%d = ", sort_nums[i]);
        if (flag == 1)
        {
            printf("소수\n");
        }
        else {
            printf("정수\n");
        }
    }
    printf("소수는 ");
    for (int j = 0; j < prime_cnt; j++) {
        printf("%d ", prime_nums[j]);
    }
    printf("로 총 %d개 입니다.", prime_cnt);
}

void bubble_sort(int* arr) {
    int temp;
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1], temp);
            }
        }
    }
}

void make_random(int* nums) {

    srand(time(NULL));

    for (int i = 0; i < MAX; i++) {
        nums[i] = rand() % 20 + 1;
    }
}

int check_prime(int num) {
    if (num == 1) {
        return 0;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

void primenumber(int* arr, int size, int* sortarr, int* primearr, int* primecnt) {
    make_random(arr);

    for (int i = 0; i < size; i++)
    {
        sortarr[i] = arr[i];
    }
    bubble_sort(sortarr);

    for (int i = 0; i < size; i++) {
        if (check_prime(sortarr[i])) {
            primearr[*primecnt] = sortarr[i];
            (*primecnt)++;
        }
    }
}