#include<stdio.h>

int main()
{
    int num1=10,num2=20,temp;
     
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("The num1 = %d and num2 = %d ",num1,num2);
    return 0;
}