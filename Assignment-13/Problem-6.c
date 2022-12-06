#include<stdio.h>


int recFactorial(int n){
    if (n==0)
       return 1;

    return n * recFactorial(n-1);
    
}
int main(){

    int number, factorial = 0;

    printf("Enter a number:");
    scanf("%d",&number);

    factorial = recFactorial(number);
    printf("%d",factorial);
}