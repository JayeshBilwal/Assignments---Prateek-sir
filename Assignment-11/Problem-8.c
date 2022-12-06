#include<stdio.h> 

int factorial(int n);
int combination(int n, int r);
void pascal(int n);
int main(){

int n,r,comb;
printf("Enter n:");
scanf("%d",&n);
printf("Enter r:");
scanf("%d",&r);

pascal(n);

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

void pascal(int n){

    int r,j;

    for ( j = 0; j <= n; j++)
    {
    for ( r = 0; r <= j; r++)
    {
        printf("%d",combination(j,r));
    }
    printf("\n");
    }
    

}