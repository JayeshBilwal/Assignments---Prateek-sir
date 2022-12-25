#include<stdio.h>

int main(){

    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int b[3][3] = {0};
    int i,j;
   printf("Befor transpoting\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%2.d",a[i][j]);
            b[i][j] = a[j][i];
        }
        printf("\n");
    }
    printf("After transpoting\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%2.d",b[i][j]);
        }
        printf("\n");
    }
    
}