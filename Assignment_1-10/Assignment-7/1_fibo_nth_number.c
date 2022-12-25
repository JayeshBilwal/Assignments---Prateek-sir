#include<stdio.h>

int main(){

    int num,a = 0,b = 1,c = 0;

   printf("Enter a number:");
   scanf("%d",&num);

     for (int  i = 1; i <= num; i++)
     {
        c = a + b;
        a = b;
        b = c;
     }
    printf("%dth term of Fibonacci number is %d\n",num,c);

     return 0;
     
}