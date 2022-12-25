#include<stdio.h>

void mearge(int x[],int y[],int n){
int i,z[12] = {0},j,k = 0;
for ( i = 0,j = 0; i<5 && j<5;k++)
{
   if (x[i]<y[j])
   {
    z[k] = x[i];
    i++;
    
   }
   else{
    z[k] = y[j];
    j++;
   }
   
}


   
if ((i == 5) && (j != 5))
{
    for ( ; j < 5 ; j++)
        z[k++] = y[j];
    
}
else{
   for ( ; i < 5 ; i++)
        z[k++] = x[i]; 
}




for(i = 0;i<10;i++)
    printf("%d ",z[i]);
}
int main(){
    int a[] = {2,4,5,8,9};
    int b[] = {1,3,6,7,10};

    mearge(a,b,5);
}