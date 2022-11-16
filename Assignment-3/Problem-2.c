#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if (num%5)
    {
        printf("%d is Not-divisible by 5",num);
    }
    else{
        printf("%d is divisible by 5",num);
    }
    
    return 0;
}