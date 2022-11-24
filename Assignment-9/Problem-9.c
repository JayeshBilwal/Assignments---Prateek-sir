#include<stdio.h>
int main()
{
    int number;

    printf("Enter Even number:");
    scanf("%d",&number);

    switch (number%2==0)
    {
    case 1:
        printf("upper nearest odd number is %d",number+1);
        break;
    
    default:
        printf("You entered odd number");
        break;
    }
}