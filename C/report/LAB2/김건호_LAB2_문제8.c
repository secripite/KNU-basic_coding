#include<stdio.h>

int fifthPower(int num);
int square(int num);
int cubic(int num);

int main(void){
	int num;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);
	printf("%d�� ���� : %d\n", num, square(num));
	printf("%d�� ������ : %d\n", num, cubic(num));
	printf("%d�� �ټ����� : %d\n", num, fifthPower(num));
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