#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct time_
{
    int hour;
    int min;
    int sec;
}time;

int how_time(time*);

int main() {
    FILE* fp;
    FILE* fp2;
    time values[2];
    int use_time;
    int times[3];

    fopen_s(&fp, "input.txt", "r");
    if (fp == NULL)
    {
        perror("error fopen");
        return;
    }
    fopen_s(&fp2, "output.txt", "w");
    if (fp == NULL)
    {
        perror("error fopen");
        return;
    }
    printf("input.txt 출력\n");

    for (int i = 0; i < 2; i++)
    {
        fscanf(fp, "%d:%d:%d", &values[i].hour, &values[i].min, &values[i].sec);
        printf("%d:%d:%d\n", values[i].hour, values[i].min, values[i].sec);
    }
    use_time = how_time(values);

    times[0] = use_time / 3600;
    use_time %= 3600;
    times[1] = use_time / 60;
    use_time %= 60;
    times[2] = use_time;

    fprintf(fp2, "경과시간은 %2d:%2d:%2d입니다.", times[0], times[1], times[2]);
    printf("경과시간은 %2d:%2d:%2d입니다.", times[0], times[1], times[2]);
    fclose(fp);
    fclose(fp2);
}

int how_time(time* values) {
    int all_time[2];

    for (int i = 0; i < 2; i++)
    {
        all_time[i] = values[i].hour * 3600 + values[i].min * 60 + values[i].sec;
    }

    return all_time[1] - all_time[0];
}