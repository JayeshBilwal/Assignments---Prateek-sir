#include<stdio.h>

int main()
{
    int num,add;
    printf("Enter the number: ");
    scanf("%d",&num);
    
   add = num % 10; 
   num = num/10;
   add = add * 100;
   num = num + add;

    printf("number after right rotation is %d",num);

    return 0;
}