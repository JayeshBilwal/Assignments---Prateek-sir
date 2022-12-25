#include<stdio.h>

float circle(float);
int main(){
    float radius,cir;
    printf("Enter radius of the circle:");
    scanf("%f",&radius);

    cir = circle(radius);
    printf("The area of circle is %f",cir);

}

float circle(float radius){
    float area = 3.14*radius*radius;
    return area;
}