#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define FtoC 30.48

int main(void) {
	float dis;
	char method;

	printf("�Է��� �Ÿ��� ��ȯ�մϴ�. ������ ��ȯ�մϴ�.\n ���� F�� f�� �Է��ϸ� ��Ƽ���ͷ�, ���ڸ� C�� c�� �Է��ϸ� ��Ʈ�� ��ȯ�մϴ�.\n\n");

	printf("���� �Է� : ");
	scanf("%c", &method);
	printf("���� �Է� : ");
	scanf("%f", &dis);

	if (method == 'F' || method == 'f') {
		printf("\n��Ʈ %.2f�� ��Ƽ���ͷ� %.2f�Դϴ�.", dis, dis * FtoC);
	}
	else {
		printf("\n��Ƽ���� %.2f�� ��Ʈ�� %.2f�Դϴ�.", dis, dis / FtoC);
	}

}