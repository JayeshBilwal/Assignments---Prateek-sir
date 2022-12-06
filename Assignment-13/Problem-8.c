#include<stdio.h>

int fibSerise(int n){

    if(n==0) 
        return 0;
    else if(n==1) 
        return 1;
    else 
        return (fibSerise(n-1) + fibSerise(n-2));
}


int main(){

    int number,i;
    printf("Enter a number:");
    scanf("%d",&number);

    for ( i = 0; i <= number; i++)
    {
        printf("%d ",fibSerise(i));
    }
    return 0;
}