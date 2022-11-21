#include<stdio.h>

int main(){

    int i,j,c;

    for ( i = 0; i <= 4; i++)
    {
        c = 1;
        for ( j = 0; j <= 4 + i; j++)
        {

            if (j>= 4-i)
            {
            printf("%d",c);
            if (j<5)
            {
            c++;
                
            }
            else
            {
                c--;
            }
            
            }
            else
            {
                printf(" ");
            }
            
            
        }
        
        printf("\n");
    }
    
}