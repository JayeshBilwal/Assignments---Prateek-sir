#include<stdio.h>

int primeOrnot(int n);

int main(){
    int x,result;
    printf("Enter a number:");
    scanf("%d",&x);

   result = primeOrnot(x);
    
    if (x==result)
        printf("%d is a prime number",x);
    else
        printf("%d is not a prime number",x);
return 0;  
}


int primeOrnot(int n){
     int i;
    for (i = 2; i <= n-1; i++)
    {
        if (n%i == 0)
        {
            break;
        }
        
    }
    
    return i;
}

