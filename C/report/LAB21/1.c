#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

int main() {
    int numbers[MAX];
    int left[5] = { 0, };
    int** arr;
    int cnt[5] = { 0, };
    int result_temp;

    srand(time(NULL));

    for (int i = 0; i < MAX; i++)
    {
        numbers[i] = rand() % 25;

        switch (numbers[i] % 5)
        {
        case 0:
            left[0]++;
            break;
        case 1:
            left[1]++;
            break;
        case 2:
            left[2]++;
            break;
        case 3:
            left[3]++;
            break;
        case 4:
            left[4]++;
            break;
        }
    }

    arr = (int**)malloc(sizeof(int*) * 5);

    for (int i = 0; i < 5; i++)
    {
        if (left[i] == 0)
        {
            arr[i] = (int*)malloc(sizeof(int));
            arr[i][0] = -1;
            left[i]++;
        }
        else
            arr[i] = (int*)malloc(sizeof(int) * left[i]);
    }

    for (int i = 0; i < MAX; i++)
    {
        switch (numbers[i] % 5)
        {
        case 0:
            arr[0][cnt[0]++] = numbers[i];
            break;
        case 1:
            arr[1][cnt[1]++] = numbers[i];
            break;
        case 2:
            arr[2][cnt[2]++] = numbers[i];
            break;
        case 3:
            arr[3][cnt[3]++] = numbers[i];
            break;
        case 4:
            arr[4][cnt[4]++] = numbers[i];
            break;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        result_temp = 0;
        printf("arr[%d] = ", i);
        for (int j = 0; j < left[i]; j++)
        {
            printf("%d", arr[i][j]);
            if (j < left[i] - 1)
            {
                printf(" + ");
            }
            result_temp += arr[i][j];
        }
        printf(" = %d\n", result_temp);
    }

}