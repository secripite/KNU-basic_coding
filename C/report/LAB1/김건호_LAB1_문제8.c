#include<stdio.h>

int main(void) {
	int cm;

	printf("���̸� ��Ƽ���ͷ� �Է��ϼ���. >> ");
	scanf("%d", &cm);
	printf("%d ��Ƽ���ʹ� ��ġ�� %.6f��ġ �Դϴ�.\n",cm,cm/2.54);

	return 0;
}