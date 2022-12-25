#include<stdio.h>

int main(){

    int a[10],i,avrage = 0;
    
    printf("Enter 10 numbers:");    
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    for ( i = 0; i < 10; i++)
    {
        avrage += a[i];
    }
    printf("%d",avrage/10);
}