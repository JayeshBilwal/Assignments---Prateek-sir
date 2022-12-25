#include<stdio.h>

int main(){

    int num ,fib1 = 0, fib2 = 1 , fib3 = 0, count = 0 , flag = 1;
     printf("Enter the value of num:");
     scanf("%d",&num);
     count = 2;

     while (count <= num+1)
     {
      fib3 = fib1 + fib2;
      count++;
      if (num == fib3)
      {
         flag = 2;
      }
   
      fib1 = fib2;
      fib2 = fib3;


     }

     if (flag == 2)
     {
      printf("yes present ");

     }
     else{
      printf("not present");
     }
     
     
    return 0;
}