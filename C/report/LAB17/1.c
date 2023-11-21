#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 0 가위 1 바위 2 보
// 10 승리 11 패배 12 비김

int check_game(int player, int com);

int main(){
    int temp;
    int com;

    srand(time(NULL));

    while (1)
    {
        printf("가위<0> 바위<1> 보<2> 종료<3> 중에서 하나 입력 ->");
        scanf("%d", &temp);
        if(temp == 3)
            break;
        com = rand() % 3;

        switch (temp)
        {
        case 0:
            printf("당신은 가위이고,");
            break;
        case 1:
            printf("당신은 바위이고,");
            break;
        case 2:
            printf("당신은 보이고,");
            break;
        }

        switch (com)
        {
        case 0:
            printf("시스템은 가위입니다.\n");
            break;
        case 1:
            printf("시스템은 바위입니다.\n");
            break;
        case 2:
            printf("시스템은 보입니다.\n");
            break;
        }
        
        switch (check_game(temp, com))
        {
        case 10:
            printf("당신의 승리입니다.\n\n");
            break;
        case 11:
            printf("시스템의 승리입니다.\n\n");
            break;
        case 12:
            printf("비겼습니다. 다시하세요.\n\n");
            break;
        }
    }
    
}

int check_game(int player, int com){
    
    switch (com)
    {
    case 0:
        if(player == 0){
            return 12;
        }
        else if(player == 1){
            return 10;
        }
        else{
            return 11;
        }
    case 1:
        if(player == 0){
            return 11;
        }
        else if(player == 1){
            return 12;
        }
        else{
            return 10;
        }
    case 2:
        if(player == 0){
            return 10;
        }
        else if(player == 1){
            return 11;
        }
        else{
            return 12;
        }
    }
}