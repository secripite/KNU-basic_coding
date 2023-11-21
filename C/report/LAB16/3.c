#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct wallet {
	int n50000;
	int n10000;
	int n5000;
	int n1000;
	int n500;
	int n100;
} wallet;

int Calc(wallet w1, wallet w2);

int main() {
	wallet bank[2];

	for (int i = 0; i < 2; i++) {
		printf("����%d�� �� ȭ���� ���� �Է��ϼ���.\n",i+1);
		scanf("%d %d %d %d %d %d", &bank[i].n50000, &bank[i].n10000, &bank[i].n5000, &bank[i].n1000, &bank[i].n500, &bank[i].n100);
	}

	printf("�� �� �� ū �ݾ��� %d�Դϴ�.",Calc(bank[0], bank[1]));
}

int Calc(wallet w1, wallet w2) {
	int result1 = 0, result2 = 0;

	result1 = w1.n50000 * 50000 + w1.n10000 * 10000 + w1.n5000 * 5000 + w1.n1000 * 1000 + w1.n500 * 500 + w1.n100 * 100;
	result2 = w2.n50000 * 50000 + w2.n10000 * 10000 + w2.n5000 * 5000 + w2.n1000 * 1000 + w2.n500 * 500 + w2.n100 * 100;
	
	return result1 > result2 ? result1 : result2;
}