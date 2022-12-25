#include<stdio.h>


float SI(int p,float r,int t);

int main(){
int Amount,time;
float rate,total;
printf("Enter amount :");
scanf("%d",&Amount);
printf("Enter rate  :");
scanf("%f",&rate);
printf("Enter time in year :");
scanf("%d",&time);

total = SI(Amount,rate,time);

printf("The interest is %f",total);



return 0;
}

float SI(int p,float r,int t){
   float total = (p*r*t)/100;
   return total;
}