#include<stdio.h>

void squre(int n){

    if (n==0)
    {
        return;
    }
    else{
        squre(n-1);
        printf("%d\n",n*n);
    }
    
}

int main(){

    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    squre(n);
}