#include<stdio.h> 

int factorial(int n);
int sum(int n);

int main(){

int n,s;
printf("Enter n:");
scanf("%d",&n);

s = sum(n);

printf("%d" ,s);
}


int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++) 
    {
            fact *= i;
    }
  return fact;
}

int sum(int n ){
    int i,s = 0;
    for ( i = 1; i <= n; i++)
    {
        s = s+ factorial(i)/i;
    }
    return s;  
}

    

