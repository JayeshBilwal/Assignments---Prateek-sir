#include<stdio.h>

int main(){

    int i,j,c;

    for ( i = 0; i <= 3; i++)
    {
        c = 1;
        for ( j = 0; j <= 6; j++)
        {
          if (j <= 3-i || j>=3+i)
          {
            printf("%d",c);
            
            
            
          }
          else{
            printf(" ");
          }
          
          if (j<3)
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