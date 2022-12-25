#include<stdio.h>

int main(){

    int num;
    printf("Enter a number");
    scanf("%d",&num);

    while (num != 0)
    {
        if (num&1 == 1)
        {
            printf("First position\n");
            break;
        }
        else
        {
            num = num << 1;
        }
        
        
    }
    
}