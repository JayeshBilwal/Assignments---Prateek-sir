#include<stdio.h>

int main(){
    int a[3][3];
    int i,j,sum = 0;
    for ( i = 0; i < 3; i++)
    {   sum += i;
        for ( j = 0; j < 3; j++)
        {
            sum += j;
        }
        
    }
    printf("the sum of row and column is %d",sum);
}