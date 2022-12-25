#include<stdio.h>

void odd(int n){
   if (n==0){

       return;
   }
   else{
      odd(n-1);
      printf("%d\n",2*n-1);
   }  
}
int main(){
    int n;

    printf("Enter a number:");
    scanf("%d",&n);

    odd(n);
    
}