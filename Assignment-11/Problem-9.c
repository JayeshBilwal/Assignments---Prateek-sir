#include<stdio.h>

int squre(int n);

int main(){

    int n,sqrt;
    printf("Enter a number:");
    scanf("%d",&n);

    sqrt = squre(n);
    printf("Squre of %d is %d",n,sqrt);
}

int squre(int n){

    int sqrt = n*n;
    return sqrt;
}