#include<stdio.h>

int factorial(int n);

int main(){
    int number,fct;
    printf("Enter a number:");
    scanf("%d",&number);

    fct = factorial(number);
    printf("The factorial is %d",fct);
}

int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++) 
    {
            fact *= i;
    }
  return fact;
}