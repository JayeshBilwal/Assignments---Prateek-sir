#include<stdio.h>

int main(){

    int num, sum = 0, r , temp;


    printf("Enter a number:");
    scanf("%d",&num);
    
    temp = num;

    while (num > 0)
    {
        r = num % 10;
        sum += r*r*r;
        num = num / 10;
    }
    
    if (temp == sum)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not a armstrong number");
    }
    
    
    return 0;
}