#include<stdio.h>

int main(){

    char ch;
    int num1,num2;
    printf("Choose an operation\n");
    printf("a.Addition\n");
    printf("b.Subtraction\n");
    printf("c.Multiplication\n");
    printf("d.Division\n");
    printf("e.Exit\n");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'a':
        printf("Enter 2 number:");
        scanf("%d %d",&num1,&num2);
        printf("The sum of the numbers is: %d",num1+num2);
        break;
    case 'b':
        printf("Enter 2 number:");
        scanf("%d %d",&num1,&num2);
        printf("The sum of the numbers is: %d",num1-num2);
        break;
    case 'c':
        printf("Enter 2 number:");
        scanf("%d %d",&num1,&num2);
        printf("The sum of the numbers is: %d",num1*num2);
        break;
    case 'd':
        printf("Enter 2 number:");
        scanf("%d %d",&num1,&num2);
        printf("The sum of the numbers is: %d",num1/num2);
        break;
    case 'e':
        break;
    
    default:
       printf("Invalid input");
        break;
    }

    return 0;
}