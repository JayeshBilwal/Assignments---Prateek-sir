#include<stdio.h>

void  rev_natural(int n){
    if (n==0)
    {
        return;
    }
    printf("%d\n",n);
    rev_natural(n-1);
}

int main(){
    int n,num;
    printf("Enter a number:");
    scanf("%d",&n);
    rev_natural(n);
    
}