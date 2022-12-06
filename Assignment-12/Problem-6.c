#include<stdio.h>

void rev_even(int n){

    if (n==0)
    {
        return;
    }
    else{
        printf("%d\n",2*n);
        rev_even(n-1);
    }
    
}
int main(){

    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    rev_even(n);
}