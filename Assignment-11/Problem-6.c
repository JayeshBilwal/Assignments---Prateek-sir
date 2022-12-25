#include<stdio.h>

void primeBetweentwo(int a, int b);

int main(){
   
   int n1,n2;
   printf("Enter twonumbers:");
   scanf("%d %d",&n1,&n2);

   primeBetweentwo(n1,n2);

}

 void primeBetweentwo(int a ,int b){

    int i,j;
    for ( i = a+1; i <= b-1; i++)
    {
        for ( j = 2; j < i; j++)
            if (i%j==0)
            break;
        
        if (i==j)
        {
            printf("%d\n",j);
        }
        
            
            
            
        
        
    }
    
 }