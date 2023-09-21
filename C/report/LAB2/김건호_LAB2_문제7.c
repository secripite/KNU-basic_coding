#include<stdio.h>

void plus(float num1, float num2);
void minus(float num1, float num2);
void times(float num1, float num2);
void divide(float num1, float num2);

int main(void) {
	float num1, num2;

	printf("두 개의 숫자를 입력하세요 : ");
	scanf("%f %f", &num1, &num2);
	plus(num1, num2);
	minus(num1, num2);
	times(num1, num2);
	divide(num1, num2);
}

void plus(float num1, float num2) {
	printf("%.3f + %.3f = %.3f\n", num1, num2, num1 + num2);
}
void minus(float num1, float num2) {
	printf("%.3f - %.3f = %.3f\n", num1, num2, num1 - num2);
}
void times(float num1, float num2) {
	printf("%.3f * %.3f = %.3f\n", num1, num2, num1 * num2);
}
void divide(float num1, float num2) {
	printf("%.3f / %.3f = %.3f\n", num1, num2, num1 / num2);
}