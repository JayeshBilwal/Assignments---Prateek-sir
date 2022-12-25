#include<stdio.h>

int LCM(int a,int b);


int main() {

    int n1, n2, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

   
    lcm = LCM(n1,n2);
    printf("The LCM of %d and %d is %d",n1,n2,lcm);
    return 0;
}

int LCM(int a,int b){
    int l;
    for ( l = a>b?a:b; l <= a*b; l = l + (a>b?a:b))
    {
        if (l%a == 0 && l%b == 0)
        {
            break;
        }
        
    }
    return l;
}