#include<stdio.h>

int main(void) {
	int cm;

	printf("길이를 센티미터로 입력하세요. >> ");
	scanf("%d", &cm);
	printf("%d 센티미터는 인치로 %.6f인치 입니다.\n",cm,cm/2.54);

	return 0;
}