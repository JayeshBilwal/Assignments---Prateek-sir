#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    
   num = ((num % 10) * 100) + (num/10); 
   

    printf("number after right rotation is %d",num);

    return 0;
}