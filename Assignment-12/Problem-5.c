#include<stdio.h>

void even(int n){
    if(n==0){
    return;
    }
    else{
        even(n-1);
        printf("%d\n",2*n);
    }
}
int main(){

    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    even(n);
}