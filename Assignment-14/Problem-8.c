#include<stdio.h>

int main(){
    int n;
    printf("Enter a length of element do you want to enter:");
    scanf("%d",&n);
    int a[n],i,j,temp;

    printf("Enter %d element:",n);
    for ( i = 0; i < n; i++)
         scanf("%d",&a[i]);

    for ( i = 0; i < n-1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (a[i]> a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        
    }
    printf("Secound smallest number is %d",a[1]);
    
}