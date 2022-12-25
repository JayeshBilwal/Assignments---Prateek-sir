#include<stdio.h>

int findGreatest(int x[],int n){
     int i,j,temp;
     for ( i = 0; i < n-1; i++)
     {
        for ( j = i+1; j < n; j++)
        {
            if(x[i]<x[j])
            {
              temp = x[i];
              x[i] = x[j];
              x[j] = temp;
            }
        }
        
        
        
     }
     return x[0];
}
int main(){
    int a[10] = {11,23,43,54,76,120,78,98,56,23};
    int gretest;
    gretest = findGreatest(a,10);

    printf("The greatest number is %d",gretest);

    return 0;
}