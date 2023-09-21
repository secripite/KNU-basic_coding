#include<stdio.h>

int fifthPower(int num);
int square(int num);
int cubic(int num);

int main(void){
	int num;

	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);
	printf("%d의 제곱 : %d\n", num, square(num));
	printf("%d의 세제곱 : %d\n", num, cubic(num));
	printf("%d의 다섯제곱 : %d\n", num, fifthPower(num));
}

int fifthPower(int num) {
	return square(num) * cubic(num);
}
int square(int num) {
	return num * num;
}
int cubic(int num) {
	return square(num) * num;
}