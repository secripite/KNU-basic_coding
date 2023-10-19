#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

char word[81][11]={0,};
int cnt[81]={0,};

int main(){
    char str[1000];
    for(int i=0;i<3;i++){
        gets(str);
        int len=strlen(str);

        char *ptr=strtok(str," "); 

        while(ptr){
            for(int j=0;(j==0||cnt[j-1]);j++){
                if(strcmp(word[j],ptr)==0){
                    cnt[j]++;
                    break;
                }
                
                if(cnt[j]==0){
                    strcpy(word[j],ptr);
                    cnt[j]++;
                    break;
                }
            }
            ptr=strtok(NULL," ");
        }
    }

    for(int i=0;cnt[i];i++){
        printf("%s - %dȸ\n",word[i],cnt[i]);
    }
    

    
}