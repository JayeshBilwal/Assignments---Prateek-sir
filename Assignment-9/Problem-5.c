#include<stdio.h>
int main(){

    int num;
    printf("Enter a input:");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("good");
        break;
    case 2:
        printf("better");
        break;
    case 3:
        printf("best");
        break;
    
    default:
        printf("invalid");
        break;
    }
}