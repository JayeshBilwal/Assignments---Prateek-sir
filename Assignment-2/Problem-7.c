#include<stdio.h>

int main()
{
    int num;
    printf("Enter the n number:");
    scanf("%d",&num);

   printf(num&1? "odd number" : "even number");
    return 0;
}