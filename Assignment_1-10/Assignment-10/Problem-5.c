#include<stdio.h>

void odd(int);
int main(){

    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    odd(number);
}

void odd(int n){
    for (int i = 0; i <= n; i++)
    {
        i = i + 1;
        printf("%d\n",i);
    }
    
}