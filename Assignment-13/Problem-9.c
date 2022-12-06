#include<stdio.h>

int countDigit(int n){
    int static count = 0;
    if(n==0)
       return count;
    else{
        count++;
        countDigit(n/10);
    
    }
}

int main(){

    int number,count = 0;
    printf("Enter a number:");
    scanf("%d",&number);
    count = countDigit(number); 
    printf("count:%d",count);
}