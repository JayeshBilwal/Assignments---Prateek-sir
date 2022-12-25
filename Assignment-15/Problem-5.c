#include<stdio.h>

int findDublicate(int x[],int n){
    int hash[100] = {0},i,j;
    for ( i = 0; i < n-1; i++)
    {      
       for ( j = i+1; j < n; j++)
       {
          if (x[i]==x[j])
          {
            return x[i];
          }
          
       }
        
    }

    
    
}
int main(){

int a[10] = {2,1,3,4,2,6,4,3,2,1};
int firstdublicate = findDublicate(a,10);

printf("The first dublicate value in this array is %d",firstdublicate);
}