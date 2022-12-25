#include<stdio.h>
int findDublicate(int a[],int n){
    int hash[100] = {0},i,count = 0;

    for ( i = 0; i < 8; i++)
    {
        hash[a[i]]++;
    }
     for ( i = 0; i < n; i++)
     {
        if (hash[i]>1)
        {
           count++;
        }
        
        
     }
     
    
return count;
}
int main(){
   int a[8] = {1,3,4,5,2,1,3,4};
    
    int dublicate = findDublicate(a,5);

    printf("The dublicate numbers in this array is %d",dublicate);
}