#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define swap(x,y,t) ((t)=(x)),((x)=(y)),((y)=(t))

typedef struct person_
{
    char name[20];
    char tel[20];
    char address[80];
}person;

void bubble_sort(person*);

int main() {
    FILE* bfp;
    FILE* bfp2;

    person members[3] = {
        {"홍길동", "011-1111-1111", "서울시 구로구 고척동"},
        {"조명호", "017-3245-3278", "서울시 강남구 도곡동"},
        {"최윤호", "011-2222-2456", "경기도 안양시 비산동"}
    };

    person reading;
    bubble_sort(members);

    fopen_s(&bfp, "data.bin", "wb");
    if (bfp == NULL)
    {
        perror("error fopen");
        return;
    }

    for (int i = 0; i < 3; i++)
    {
        fwrite(&members[i], sizeof(members[i]), 1, bfp);
    }

    fclose(bfp);

    fopen_s(&bfp2, "data.bin", "rb");
    if (bfp2 == NULL)
    {
        perror("error fopen");
        return;
    }

    printf("이름   전화번호\n");

    for (int i = 0; i < 3; i++)
    {
        fread(&reading, sizeof(person), 1, bfp2);
        if (strstr(reading.address, "서울시") != NULL) {
        printf("%s %s\n", reading.name, reading.tel);
        }
    }

}


void bubble_sort(person* values) {
    person temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2 - i; j++)
        {
            if (values[j].name[0] > values[j + 1].name[0] || (values[j].name[0] == values[j + 1].name[0] && values[j].name[1] > values[j + 1].name[1])) {
                swap(values[j], values[j + 1], temp);
            }
        }

    }
}