#include<stdio.h>

void natural(int n);
int main(){

int n;
printf("Enter a number:");
scanf("%d",&n);
natural(n);
}

void natural(int n){
    for ( int i = 1; i <= n; i++)
    {
        printf("%d\n",i);
    }
    
}