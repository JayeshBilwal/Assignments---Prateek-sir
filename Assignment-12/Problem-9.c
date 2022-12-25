#include<stdio.h>

void octal(int n){

    if(n==0)
      return;
    
    octal(n/8);
    printf("%d",n%8);
}

int main(){

    int number;
    printf("Enter a number:");
    scanf("%d",&number);

    octal(number);
}