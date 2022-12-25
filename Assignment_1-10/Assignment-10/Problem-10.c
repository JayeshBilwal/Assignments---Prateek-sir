#include<stdio.h>

void primeFact(int n);

int main(){
int number;
printf("Enter a number:");
scanf("%d",&number);

primeFact(number);
}

void primeFact(int n){
     int i = 2;

     for ( i = 2; i <= n; i++)
     {
        printf("%d ",i);
        n = n/i;
     }
     
}