#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if (num%2)
    {
        printf("Odd number");
    }
    else{
        printf("Even number");
    }
    return 0;
}