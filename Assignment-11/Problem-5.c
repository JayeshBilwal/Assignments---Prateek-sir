#include<stdio.h>

void nPrime(int n);

int main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);

    nPrime(number);
}

void nPrime(int n){
   int i,j;
   for ( i = 1; i <= n-1; i++)
   {
      for ( j = 2; j < i; j++)
      {
        if (i%j == 0)
           break;
        
      }
      if (i==j)
      {
        printf("%d\n",j);
      }
      
      
   }
   
}