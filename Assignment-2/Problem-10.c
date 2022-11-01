#include<stdio.h>

int main()
{
    int number = 234;
    int digit = 9;

    number = number * 10;
    number = number + digit;

    printf("The result is %d",number);
    return 0;
}