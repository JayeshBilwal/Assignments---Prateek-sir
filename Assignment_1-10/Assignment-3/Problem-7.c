#include<stdio.h>

int main(){
    double a,b,c,discriminant;

    printf("Enter coefficiant a,b and c");
    scanf("%lf %lf %lf",&a,&b,&c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        printf("Real and Distinct");
    }
    else if (discriminant == 0)
    {
        printf("Real and Deferrent root");
    }
    else
    {
        printf("Root are not real");

    }
    
return 0;
    
}