#include<stdio.h>


void rev_Odd(int n){
 
 if (n==0)
 {
    return;
 }
 else{
    printf("%d\n",2*n-1);
    rev_Odd(n-1);
 }
 
}
int main(){

    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    
    rev_Odd(n);
}