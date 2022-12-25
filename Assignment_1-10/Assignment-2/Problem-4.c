#include<stdio.h>

int main()
{
    int num1=10,num2=20;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("The swaped value of num1 and num2 is num1 = %d and num2 = %d",num1,num2);
    
    return 0;
}