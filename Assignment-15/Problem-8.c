#include<stdio.h>

void printUnique(int a[],int n){
    int i,hash[100] = {0};
    for ( i = 0; i < n; i++)
    {
        hash[a[i]]++;
    }
    
    for ( i = 0; i < 10; i++)
    {
        if (hash[i] == 1)
        {
        printf("%d -> %d\n",i,hash[i]);
        }
        
    }
    
}

int main(){

    int x[] = {1,2,3,4,5,1,4,6,9,8,9};

    printUnique(x,11);
}