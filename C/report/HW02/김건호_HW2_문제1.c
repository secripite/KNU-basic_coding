#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define pi 3.1415926535

int main(){
    double y;
    int blk,blkL=20,maxW=20;

    for(int x = 0;x<=36;x+=1){
        y = sin(x*2*pi/36);

        blk = y * maxW;
        
        if(blk>=blkL)
            blk=blkL-1;
        else if(blk<=-blkL+1)
            blk=-blkL+1;

        if(blk == 0)
            if(x > 18)
                blk = -1;
            else
                blk = 1;

        if(x <= 18){
            for( int i = 1; i < 20 ; i++ ){
                printf(" ");
            }
            for( int n = 0; n < blk ; n++ ){
                printf("*");
            }
        }
        else{
            for(int i = - 19;i<blk;i++){
                printf(" ");
            }
            for(int i = (int)blk; i<0;i++){
                printf("*");
            }
        }
        printf("\n");
    }
}