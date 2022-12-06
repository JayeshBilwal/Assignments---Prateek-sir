#include<stdio.h>

int sumNatural(int n){
    int sum = 0;
    if(n==1)
       return 1;
    return n + sumNatural(n-1);
   
}


int main(){

    int number,sum = 0;
    printf("Enter a number:");
    scanf("%d",&number);

    sum = sumNatural(number);

    printf("%d",sum);
}