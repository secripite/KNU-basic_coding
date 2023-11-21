#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int check_num(int input, int target);

int main() {
    int seed;
    int temp;
    int temp_result;
    int flag = 0;

    printf("랜덤으로 숫자를 생성합니다.\n");
    srand(time(NULL));
    seed = rand() % 1000 + 1;

    for (int i = 0; i < 8; i++) {
        printf("%d. 생성된 숫자를 예상해 주세요 : ", i+1);
        scanf("%d", &temp);
        temp_result = check_num(temp, seed);

        switch (temp_result)
        {
        case -1:
            printf("DOWN\n");
            break;
        case 1:
            printf("UP\n");
            break;
        case 0:
            printf("정답입니다.\n정답은 %d입니다.", seed);
            flag = 1;
            break;
        }
        if (flag == 1) {
            break;
        }
    }
    if (flag == 0) {
        printf("8번의 기회을 모두 사용하였지만 정답을 맞추지 못하였습니다.\n 정답은 %d 이었습니다.", seed);
    }

}

int check_num(int input, int target) {
    if (input > target) {
        return -1;
    }
    else if (input < target) {
        return 1;
    }
    else {
        return 0;
    }
}