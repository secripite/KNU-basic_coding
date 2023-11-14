#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define swap(x,y,t) ((t)=(x)),((x)=(y)),((y)=(t))

void bubblesort(int* arr){
    int temp;
    for (int i = 0; i < 10;i++){
        for (int j = 0; j < 9;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j + 1], temp);
            }
        }
    }
}

int main(){
    int *numarr;

    printf("정렬 전 배열 값 : -->\n");
    numarr = (int *)malloc(sizeof(int) * 10);
    srand(time(NULL));
    for (int i = 0; i < 10;i++){
        numarr[i] = rand() % 100;
    }

    for (int i = 0; i < 9;i++){
        printf("%d,", numarr[i]);
    }
    printf("%d\n", numarr[9]);
    
    bubblesort(numarr);

    printf("정렬 후 배열 값 : -->\n");
    for (int i = 0; i < 9;i++){
        printf("%d,", numarr[i]);
    }
    printf("%d", numarr[9]);

    free(numarr);
}