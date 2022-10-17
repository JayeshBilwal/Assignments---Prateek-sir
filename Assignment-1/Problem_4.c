#include <stdio.h>

int main()
{
    int r;
    float Pi = 3.14;

    printf("Enter the radius of the circle:");
    scanf("%d", &r);
    printf("Area of circle is %f having the radius %d", Pi * r * r,r);
    return 0;
}