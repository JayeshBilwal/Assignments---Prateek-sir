#include<stdio.h>

int main(){

    int a[3][3] = {1,2,3,4,5,7,8,9};
    int b[3][3] = {1,2,3,4,5,6,7,8,9},i,j,k;
    int product[2][2] = {0},sum = 0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            for ( k = 0; k < 3; k++)
            {
                sum = a[i][k] * b[k][j] + sum;
            }
             product[i][j] = sum;
        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%1.d ",product[i][j]);
        }
        printf("\n");
    }
    
}