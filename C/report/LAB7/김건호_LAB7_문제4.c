#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
    int memo[45] = {0,};
    int cnt = 0, random;

    srand(time(NULL));

    while (cnt != 6)
    {
        random = rand() % 45;

        if(!memo[random]){
            printf("%d ", random);
            memo[random] = 1;
            cnt++;
        }
    }
}