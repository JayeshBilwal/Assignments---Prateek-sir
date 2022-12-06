#include<stdio.h>

int squareSum(int n){

    if(n==0)
       return 0;
    
    return n*n + squareSum(n-1);
}

int main(){

    int number,sum = 0;

    printf("Enter a number:");
    scanf("%d",&number);

    sum = squareSum(number);
    printf("%d",sum);

    return 0;
}