#include<stdio.h> 

int factorial(int n);
int permutation(int n, int r);
int main(){

int n,r,comb;
printf("Enter n:");
scanf("%d",&n);
printf("Enter r:");
scanf("%d",&r);

comb = permutation(n,r);
printf("permutation is  %d",comb);

}

int permutation(int n,int r){
    return factorial(n)/factorial(n-r);
}
int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++) 
    {
            fact *= i;
    }
  return fact;
}

