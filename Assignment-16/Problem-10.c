#include<stdio.h>

int main(){

    int a[3][3] ={ {1,2,3},
                   {1,1,1},
                   {1,3,4} };
    int i,j;
     int indexOfRowWithMax1s = -1 ;
    int maxCount = 0 ;

    for (i = 0; i < 3; i++)
    {
        int count = 0;
        for ( j = 0; j < 3; j++)
        {
            if (a[i][j] == 1)
            {
                count++;

            }
            
        }
        if (count > maxCount)
        {
            maxCount = count;
            indexOfRowWithMax1s = i;
        }
        
    }
     printf("Index of row with maximum 1s is %d",indexOfRowWithMax1s);
}