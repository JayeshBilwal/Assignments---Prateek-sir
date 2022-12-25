#include<stdio.h>

void printreverseOrder(int n){

    if(n==0)
       return;
    
    printf("%d",n%10);
    printreverseOrder(n/10);
}

int main(){

    int number;
    printf("Enter a number:");
    scanf("%d",&number);

    printreverseOrder(number);

    return 0;
}