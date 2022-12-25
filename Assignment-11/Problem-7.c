#include<stdio.h>

void fibonacci(int n);
int main(){

int number;

printf("Enter a number:");
scanf("%d",&number);

fibonacci(number);
    
}

void fibonacci(int n){
    int i,a = -1,b = 1,c;
    for ( i = 0; i <= n; i++)
    {
        c = a+b;
        printf("%d\n",c);
        a = b;
        b = c;
    }
    
}