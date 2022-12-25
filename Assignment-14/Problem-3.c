#include<stdio.h>

int main(){

    int a[10],i,evenSum = 0,oddSum = 0;
    printf("Enter 10 numbers:");
    for ( i = 0; i < 10; i++)
    {
    scanf("%d",&a[i]);
    }
    

    for ( i = 0; i < 10; i++)
    {
        if(a[i]%2==0)
           evenSum += a[i];
        else
           oddSum += a[i];
    }

    printf("The sum of even numbers is %d\n",evenSum);
    printf("The sum of odd numbers is %d",oddSum);
    
}