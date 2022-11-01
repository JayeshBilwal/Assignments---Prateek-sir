#include<stdio.h>

int main()
{
   int number = 678,add,temp;
   add = number % 10;
   number = number / 10;
   add += number % 10;
   number = number / 10;
   add += number;

   printf("%d",add);




    return 0;
}