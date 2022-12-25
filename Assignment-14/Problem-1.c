#include<stdio.h>

int main()
{
    int a[10],i,sum = 0;
    printf("Enter 10 numbers:");
    for ( i = 0; i < 10; i++)
    {
    scanf("%d",&a[i]);
    }
    
    for ( i = 0; i < 10; i++)
    {
       sum += a[i];
    }
    
    printf("The sum of the array is %d",sum);
}