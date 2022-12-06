#include<stdio.h>

void natural(int n);

int main(){

    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    natural(n);
    
}

void natural(int n){
    if (n==0)
    {
        return;
    }
    
    natural(n-1);
    printf("%d\n",n);
}