#include<stdio.h>

int main(){

    int i,j,c;

    for ( i = 0; i <= 6; i++)
    {
        c = 'A';
        for ( j = 0; j <= 12; j++)
        {
            if (j <= 6 - i || j >= 6+i)
            {
            printf("%c",c); 
            }
            else{
                printf(" ");
            }
             if (j < 6)
                {
                    c++;
                }
                else
                {
                    c--;
                }
            
        }
        printf("\n");
    }
    
}