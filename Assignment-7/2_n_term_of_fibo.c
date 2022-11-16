#include<stdio.h>

int main(){

    int num, a=0 , b = 1, c =0;

    printf("Enter a number\n");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("The %dterm fibonacci serise is %d\n",num,c);
    }
   return 0; 
}