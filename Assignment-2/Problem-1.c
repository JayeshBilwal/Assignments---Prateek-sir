#include<stdio.h>

int main()
{
    int number = 241,unit_digit;
    unit_digit = number % 10;

    printf("The unit digit is %d",unit_digit);
    return 0;
}