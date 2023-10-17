#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double Mm_difference(double *nums);

int main(){
    double ary[5] = {3.12, 5.14, 7.25, 7.48, 5.91};
    
    printf("source 원 배열 값 :\n");
    for (int i = 0; i < 5;i++){
        printf("%9.2f", ary[i]);
    }
    printf("\n\n");

    printf("최대값과 최소값의 차이는 %.6f이다.\n", Mm_difference(ary));
}

double Mm_difference(double *nums){
    double Mtmep,mtmep;

    Mtmep = nums[0];
    mtmep = nums[0];
    
    for (int i = 0; i < 5;i++){
        if(nums[i]>Mtmep)
            Mtmep = nums[i];
        if(nums[i]<mtmep)
            mtmep = nums[i];
    }

    return Mtmep - mtmep;
}