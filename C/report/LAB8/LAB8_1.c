#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int fn_cnt = 0;

int cnt_fn(){
    static int cnt = 0;
    cnt++;
    fn_cnt++;
    printf("�Լ��� %d��° ����Դϴ�.\n", cnt);
    return cnt;
}

int main(){
    int num, temp;

    printf("���� Ƚ�� �Է� : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++){
        temp = cnt_fn();
    }

    printf("���� ���� ��� : %d\n", fn_cnt);
    printf("���� ���� ���� ��� : %d\n", temp);
}