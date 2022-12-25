#include<stdio.h>

int main(){

    int num;
    printf("Enter a number");
    scanf("%d",&num);

    if (num%7 == 0 || num%3==0)
    {
        printf("Number is divisible by 7 or 3");
    }
    else
    {
        printf("Number is'nt divisible by 7 or 3");
    }
    
    return 0;
    
}