#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum boolean_
{
    true_ = 1,
    false_ = 0
}boolean;

int main(){
    int nums[11];
    int size = 0;
    char temp;

    boolean bool_ = true_;

    while (1)
    {
        temp = getchar();
        if (temp >= '0' && temp <= '9')
        {
            nums[size++] = temp - '0';
        }
        else if(temp == '\n'){
            size--;
            break;
        }
    }
    

    for (int i = 1; i < size;i++){
        if(nums[0] < nums[i]){
            bool_ = false_;
        }
    }

    if(bool_ == false_){
        printf("FALSE");
    }
    else{
        printf("TRUE");
    }
    
}