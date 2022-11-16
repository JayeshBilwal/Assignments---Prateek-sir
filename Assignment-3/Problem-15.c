#include<stdio.h>

int main(){

    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if (num>0)
    {
        printf("The number is Positive");
    }
    else if (num == 0)
    {
        printf("The number is Zero");
    }
    else
    {
        printf("The number is Negative");
    }
    
    return 0;
    
    
}