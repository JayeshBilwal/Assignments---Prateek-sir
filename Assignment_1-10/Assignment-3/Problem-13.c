#include<stdio.h>

int main(){

    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if (num%3 && num%2)
    {
        printf("Number is not divisible by 3 and 2");
    }
    else
    {
        printf("the %d is by 3 and 2",num);
    }
    

    return 0;
    
}