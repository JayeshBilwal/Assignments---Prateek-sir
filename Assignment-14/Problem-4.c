#include<stdio.h>

int main(){
    int a[10],i,max,j;

    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    max = a[0];
    
    for ( i = 0; i < 9; i++)
    {
       if (max < a[i])
       {
        max= a[i];
       }
       
        
    }
   printf("The greatest number in this array is %d",max);   

}