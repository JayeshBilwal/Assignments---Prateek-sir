#include<stdio.h>

void dDirection(int x[],int n,int d){
int i,j,temp;
for ( j = 0; j < d; j++)
{
temp = x[0];
for ( i = 0; i < n; i++)
{
   x[i] = x[i+1];  
}
x[n-1]=temp;
}


for ( i = 0; i < n; i++)
{
    printf("%d ",x[i]);
}

   
}

int main(){
   int a[]={32, 29, 40, 12, 70};
   dDirection(a,5,3);
}