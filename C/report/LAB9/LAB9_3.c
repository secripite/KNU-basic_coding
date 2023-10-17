#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int cnt_fn(){
    static int cnt = 0;
    cnt++;
    printf("함수 cnt_fn()을 %d번 호출하고 있습니다.\n", cnt);
    return cnt;
}

int main(){
    int temp;

    for (int i = 0; i < 6; i++){
        temp = cnt_fn();
    }

    printf("함수 cnt_fn()이 총 %d번 호출되었습니다.", temp);

}