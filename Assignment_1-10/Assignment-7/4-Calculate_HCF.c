#include<stdio.h>

int main(){

    int x , y;
    printf("Enter two number x and y\n");
    scanf("%d %d",&x,&y);

    for (int i = 1; i <= x*y; i++)
   {
    if ((i % x == 0) && (i % y == 0))
    {
      printf("HCf of %d and %d is %d",x,y,(x*y)/i);
      break;
        
    }
   }
 return 0;    
}