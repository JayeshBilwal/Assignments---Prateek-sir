#include<stdio.h>

int main(){

    int option;
    float total,unit;

    printf("Electricity Bill Generater\n");
    printf("1.For 0 - 50 unit\n");
    printf("2.For 51 - 150 unit\n");
    printf("3.For 151 - 250 unit\n");
    printf("4.For Above 250 unit\n");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        printf("Enter an unit:");
        scanf("%f",&unit);
        total = unit*0.50 ;
        total += 20/100*total;
        printf("Total Bill %f",total);
        break;
    case 2:
        printf("Enter an unit:");
        scanf("%f",&unit);
        total = unit*0.75 ;
        total += 20/100*total;
        printf("Total Bill %f",total);
        break;
    case 3:
        printf("Enter an unit:");
        scanf("%f",&unit);
        total = unit*1.20 ;
        total += 20/100*total;
        printf("Total Bill %f",total);
        break;
    case 4:
        printf("Enter an unit:");
        scanf("%f",&unit);
        total = unit*1.75 ;
        total += (20/100)*total;
        printf("Total Bill %f",total);
        break;
    
    default:
        printf("You entered invalid input");
        break;
    }


}