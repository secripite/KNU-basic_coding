#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int cnt_fn(){
    static int cnt = 0;
    cnt++;
    printf("�Լ� cnt_fn()�� %d�� ȣ���ϰ� �ֽ��ϴ�.\n", cnt);
    return cnt;
}

int main(){
    int temp;

    for (int i = 0; i < 6; i++){
        temp = cnt_fn();
    }

    printf("�Լ� cnt_fn()�� �� %d�� ȣ��Ǿ����ϴ�.", temp);

}