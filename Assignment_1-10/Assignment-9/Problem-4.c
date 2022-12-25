#include<stdio.h>

int main(){

    char ch;
    int num1,num2,num3;
    printf("Enter your choice:\n");
    printf("a.Check isosceles triangle or not\n");
    printf("b.Check right angled triangle or not\n");
    printf("c.Check equilateral triangle or not\n");
    printf("d.Exit\n");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'a':
        printf("Enter 3 numbers:");
        scanf("%d %d %d",&num1,&num2,&num3);
        if (num1==num2 || num1==num3 || num2==num3)
            printf("Isosceles triangle.");
        else
            printf("not a Isosceles triangle.");
        break;
    case 'b':
        printf("Enter 3 numbers:");
        scanf("%d %d %d",&num1,&num2,&num3);
        if ((num1*num1)+(num2*num2)==(num3*num3) || (num1*num1)+(num3*num3)==(num2*num2) || (num2*num2)+(num3*num3)==(num1*num1))
            printf("It is a right angle triangle!");
        else
            printf("It is not a right angle triangle!");
        break;
    case 'c':
        printf("Enter 3 numbers:");
        scanf("%d %d %d",&num1,&num2,&num3);
        if (num1==num2 && num2==num3)
            printf("Equilateral triangle.");
        else
            printf("not a Equilateral triangle.");
        break;
    
    case 'd':
        break;
    default:
        break;
    }

    

}