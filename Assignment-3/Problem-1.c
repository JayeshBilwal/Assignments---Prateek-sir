#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if (num>0)
    {
        printf("The Number is positive");
    }
    else{
        printf("Number is Non-Positive");
    }
    
    return 0;
}