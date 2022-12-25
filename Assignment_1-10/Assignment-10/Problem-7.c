#include<stdio.h> 

int factorial(int n);
int combination(int n, int r);
int main(){

int n,r,comb;
printf("Enter n:");
scanf("%d",&n);
printf("Enter r:");
scanf("%d",&r);

comb = combination(n,r);
printf("Combination is  %d",comb);

}

int combination(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++) 
    {
            fact *= i;
    }
  return fact;
}
