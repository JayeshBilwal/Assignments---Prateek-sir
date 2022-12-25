#include<stdio.h>

int main(){
    int n,i;
    printf("Enter length of the array:");
    scanf("%d",&n);
    int a[n],b[n];

    printf("Enter %d Elements:",n);
    for (size_t i = 0; i < n; i++)
         scanf("%d",&a[i]);
    
    for ( i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    
    for ( i = 0; i < n; i++)
    {
        printf("%d ",b[i]);
    }
    
}