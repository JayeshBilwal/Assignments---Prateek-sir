#include<stdio.h>

int HCF(int a,int b);

int main() {
   int n1, n2, hcf;

   printf("Enter two number:");
   scanf("%d %d",&n1,&n2);

  hcf = HCF(n1,n2);

  printf("HCF is = %d", hcf);
   
   return 0;
}

int HCF(int a,int b){
int H;

for(H = a<b?a:b; H >= 1; H--) {
   if( a%H == 0 && b%H == 0 )
      break;
   }
   return H;
}