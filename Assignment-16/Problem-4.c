#include<stdio.h>

int main(){
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int sum = 0,i,j;

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0 ; j < 3; j++)
        {
            if (j >=i)
            {
                sum += a[i][j];
            }
            
            
        }
        
    }
    printf("The of the rigth diagonals is %d",sum);

}