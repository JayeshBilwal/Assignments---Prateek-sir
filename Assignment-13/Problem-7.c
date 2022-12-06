#include<stdio.h>

int HCF(int n1,int n2){

    if(n2 == 0)
       return n1;
    return HCF(n2,n1%n2);
}

int main(){

    int a,b,hcf;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);

    hcf = HCF(a,b);
    printf("%d",hcf);


}