#include<stdio.h>

int main(){

    int x , y,HCF;
    printf("Enter two number x and y\n");
    scanf("%d %d",&x,&y);

    for (int i = 1; i <= x*y; i++)
   {
    if ((i % x == 0) && (i % y == 0))
    {
        HCF = (x*y)/i;
      printf("HCf of %d and %d is %d\n",x,y,HCF);
      break;
        
    }

   }

   if (HCF == 1)
   {
    printf("Yes it is Co-prime");
   }
   else
   {
    printf("Not a Co-prime");
   }
   
   
 return 0;    
}