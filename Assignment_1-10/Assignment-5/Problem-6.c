#include<stdio.h>

int main()
{
    int num;

    printf("Enter the number");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        printf("%d\n",i*2);
    }
    return 0;
}