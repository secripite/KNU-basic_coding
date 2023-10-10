#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int fn_cnt = 0;

int cnt_fn(){
    static int cnt = 0;
    cnt++;
    fn_cnt++;
    printf("함수의 %d번째 출력입니다.\n", cnt);
    return cnt;
}

int main(){
    int num, temp;

    printf("실행 횟수 입력 : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++){
        temp = cnt_fn();
    }

    printf("전역 변수 출력 : %d\n", fn_cnt);
    printf("정적 지역 변수 출력 : %d\n", temp);
}