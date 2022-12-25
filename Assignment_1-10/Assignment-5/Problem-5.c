#include<stdio.h>

int main()
{
    int num;

    printf("Enter the number");
    scanf("%d",&num);

    for (int i = 0; i <= num; num--)
    {
        printf("%d\n",num*2+1);
    }
    
}