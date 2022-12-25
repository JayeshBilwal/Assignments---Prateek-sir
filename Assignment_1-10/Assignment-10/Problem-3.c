#include<stdio.h>

int evenorodd(int n);

int main(){

    int number,result;
    printf("Enter anumber:");
    scanf("%d",&number);
    result = evenorodd(number);
    if (result == 1)
        printf("even number");
    else
        printf("Odd number");
    
    return 0;
}

int evenorodd(int n){
    if(n%2==0)
       return 1;
   else
       return 0;  
}