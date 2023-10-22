#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

float plus(float *nums);
float minus(float *nums);
float multiply(float *nums);
float divide(float *nums);

int main(){
    float nums[2];
    float (*fn[4])(float*);

    printf("두 개의 숫자를 입력하세요 : ");
    scanf("%f %f", &nums[0], &nums[1]);
    fn[0] = plus;
    fn[1] = minus;
    fn[2] = multiply;
    fn[3] = divide;

    printf("%.3f + %.3f = %.3f\n", nums[0], nums[1], fn[0](nums));

    printf("%.3f - %.3f = %.3f\n", nums[0], nums[1], fn[1](nums));

    printf("%.3f * %.3f = %.3f\n", nums[0], nums[1], fn[2](nums));

    printf("%.3f / %.3f = %.3f\n", nums[0], nums[1], fn[3](nums));
}

float plus(float *nums){
    return nums[0] + nums[1];
}
float minus(float *nums){
    return nums[0] - nums[1];
}
float multiply(float *nums){
    return nums[0] * nums[1];
}
float divide(float *nums){
    return nums[0] / nums[1];
}