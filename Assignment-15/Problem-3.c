#include<stdio.h>

void Sort(int x[],int n){

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
    for ( i = 0; i < n; i++)
    {
        printf("%d ",x[i]);
    }
    
}

int main(){
    int n,i;
    printf("Enter a length of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements:",n);
    for ( i = 0; i < n; i++)
        scanf("%d",&a[i]);
    
    Sort(a,n);
    
}