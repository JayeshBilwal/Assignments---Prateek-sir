#include<stdio.h>

int check(int digit,int number);

int main(){

    int number = 8765,digit,result;

    printf("Enter a digit:");
    scanf("%d",&digit);

    result = check(digit,number);
    if(result == 1)
       printf("Present");
    else
       printf("Not present");
return 0;
}

int check(int digit,int number){
    while (number)
    {
        if(number%10 == digit)
           return 1;
        number = number/10;
         
    }
    return 0;
    
}