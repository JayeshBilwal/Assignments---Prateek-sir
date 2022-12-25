#include<stdio.h>

int main(){
    int a[3][2] = {1,2,3,4,5,6};
    int b[3][2] = {11,12,13,14,15,16},i,j;
    int sum[3][3] = {0};
    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
              sum[i][j] = a[i][j] + b[i][j];
        }
       
    }
    printf("Sum of the metrices are\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%3.d ",sum[i][j]);
        }
        printf("\n");
    }
    
}