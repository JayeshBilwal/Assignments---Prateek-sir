#include<stdio.h>

int main(){
    int a[10] = {10,7,4,54,67,34,56,2,3};
    int temp,i,j;

    for ( i = 0; i < 8; i++)
    {
     for ( j = i+1; j < 9; j++)
     {
        if(a[i]>a[j])
          {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
          }
     }
          
    }

    for ( i = 0; i < 9; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    
    

}