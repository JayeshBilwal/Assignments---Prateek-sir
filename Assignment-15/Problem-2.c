#include<stdio.h>

int findSmallest(int x[],int n){
   int i,j,temp;
   for ( i = 0; i < n-1; i++)
   {
    for ( j = i+1; j < n; j++)
    {
        if (x[i] > x[j])
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
    int a[10] = {12,3,4,11,3,6,7,8,9,10},smallest;

    smallest = findSmallest(a,10);
    printf("Smallest numbers is %d",smallest);
}