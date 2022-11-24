#include<stdio.h>

int main(){

    int year,y;
    printf("Enter a year;");
    scanf("%d",&year);


    y = year % 400 == 0 || year % 100 == 0 || year % 4 == 0;
    
    switch (y)
    {
    case 1:
        printf("%d is leap year",year);
        break;
    case 0:
        printf("%d is not leap year",year);
        break;
    
    default:
        printf("%d is not leap year",year);
        break;
    }
}