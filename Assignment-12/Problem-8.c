#include<stdio.h>


void binary(int n){

    if (n==0)
        return;
   
    binary(n/2);
    printf("%d",n%2);

}
int main(){

    int number;
    printf("Enter a number:");
    scanf("%d",&number);
     
    binary(number);
}