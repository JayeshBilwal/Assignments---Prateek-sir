#include<stdio.h>


int digitSum(int n){
   if(n==0)
      return 0;
   return n%10 + digitSum(n/10);
    
}
int main(){

    int number, sum = 0;

    printf("Enter a number:");
    scanf("%d",&number);

    sum = digitSum(number);

    printf("%d",sum);

    return 0;
}