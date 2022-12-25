#include<stdio.h>

int oddSum(int n){
    if(n==0)
      return 0;
    return (n*2-1) + oddSum(n-1);
}

int main(){

    int number,sum = 0;
    printf("Enter a number:");
    scanf("%d",&number);

    sum = oddSum(number);
    printf("%d",sum);
}