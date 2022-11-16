#include<stdio.h>

int main(){

    int num, add = 1;
    printf("Enter a number:");
    scanf("%d",&num);
    

    for (int  i = 1; i <= num; i++)
    {
        add  *= i;
    }

    printf("%d\n",add);

    return 0;
    
}