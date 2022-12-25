#include<stdio.h>

void reverse(int x[],int n){
    int i;
    for ( i = n-1; i >= 0; i--)
    {
        printf("%d ",x[i]);
    }
    
}
int main(){
    int n,i;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];

    printf("Enter %d elements:",n);
    for ( i = 0; i < n; i++)
        scanf("%d",&a[i]);
    
    reverse(a,n);
}