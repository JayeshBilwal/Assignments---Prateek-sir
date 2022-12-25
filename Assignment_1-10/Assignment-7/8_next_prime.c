#include<stdio.h>

int main(){

    int a,b,i ,N , flag;
   
   printf("Enter two numbers:");
   scanf("%d %d",&a,&b);


    for ( i = a; N <= b; N++)
    {
        flag = 0;
        for ( i = 2; i <= N/2; i++)
        {
            if (N%i == 0)
            {
                flag++;
                break;  
            }
            
        }
        if (flag == 0 && N != 1)
        {
            printf(" %d", N);
            break;
        
        }
        
        
    }
   return 0; 
}