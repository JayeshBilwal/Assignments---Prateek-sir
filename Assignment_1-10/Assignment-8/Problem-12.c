#include<stdio.h>

int main(){

    int i,j,c;

    for ( i = 0; i <= 3; i++)
    {
        c = 'A';
        for ( j = 0; j <= 6-i; j++)
        {
            if (i <= j)
            {
            printf("%c",c);
            if (j<3)
               c++;
            else
               c--;
            
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
}