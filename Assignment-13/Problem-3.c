#include<stdio.h>

int evenSum(int n){

    if(n==0)
       return 0;
    
    return n*2 + evenSum(n-1);
}

int main(){

    int number,sum = 0;
    printf("Enter a number:");
    scanf("%d",&number);

    sum = evenSum(number);
    printf("%d",sum);
}