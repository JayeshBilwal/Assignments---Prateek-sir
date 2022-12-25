#include<stdio.h>

int main(){

    float number;
    int choice;
    printf("1. for Negative to positive\n");
    printf("2. for positive to negative\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter a negative number:");
        scanf("%f",&number);
        number = number*(-1);
        printf("the positive form of number is %f",number);
        break;
    case 2:
        printf("Enter a Positive number:");
        scanf("%f",&number);
        number = number*(-1);
        printf("the Negative form of number is %f",number);
        break;
    
    default:
        printf("You Entered invalid input");
        break;
    }
}