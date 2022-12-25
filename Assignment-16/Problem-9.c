#include<stdio.h>

int main(){

    int a[3][3] = {1,2,0,3,0,0,4,5,0,6};
    int i,j,count = 0;

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (a[i][j] == 0)
                 count++;
            
        }
        
    }

    if (count >= (i*j)/2)
        printf("Sparce matrix");
    else
        printf("Not a sparce matrix");
        
 return 0;   
}