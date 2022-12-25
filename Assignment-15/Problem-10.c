#include<stdio.h>

void frequincy(int x[],int n){

int hash[100] = {0},i;
for ( i = 0; i < n; i++)
{
    hash[x[i]]++;
}
printf("Frequincy:\n");
for ( i = 1; i <= 5; i++)
{
    printf("%d -> %d\n",i,hash[i]);
}

}
int main(){
    int a[] = {1,2,3,4,5,3,4,2,1,2};

    frequincy(a,10);
}