#include<stdio.h>

int main(){

    int num, remender = 0, rev_number = 0;

    printf("Enter a number\n");
    scanf("%d",&num);

   while (num != 0)
   {
    remender = num % 10;
    rev_number = rev_number * 10 + remender;
    num = num / 10;
   }
   
   printf("The reverse number is: %d",rev_number);
}