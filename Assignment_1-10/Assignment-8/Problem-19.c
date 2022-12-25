#include<stdio.h>

int main(){

    int i,j,k,l;

    for ( i = 0; i <= 3; i++)
    {
        for ( j = 0; j <= 16 + i; j++)
        {
            if (j >= 2 -i && j <=6 + i || j >= 12-i )
            {
            printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }

    for ( k = 0; k <= 12; k++)
    {
        for (l = 0; l <= 18 - k; l++)
        {
            if (l>= k+1 )
            {
            printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
    
}