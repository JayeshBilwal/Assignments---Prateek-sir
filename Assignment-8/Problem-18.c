#include<stdio.h>

int main(){

    int i,j,k,l;

    for ( i = 0; i <=4; i++)
    {
        for ( j = 0; j <= 4+i; j++)
        {    
            if (j>=4-i)
            {
                
            printf("*");
            
            }
            else
            {
               printf(" ");
            }
   
        }
        
        printf("\n");
    }
    for ( k = 0; k <=4; k++)
    {
        for ( l = 0; l <= 7-k; l++)
        {    
            if (l>=k+1)
            {
                
            printf("*");
            
            }
            else
            {
               printf(" ");
            }
   
        }
        
        printf("\n");
    }
    
}