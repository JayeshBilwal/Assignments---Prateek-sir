#include<stdio.h>

int main()
{
    int side_1,side_2,side_3;
    printf("Enter a length of the tree sides:");
    scanf("%d %d %d",&side_1,&side_2,&side_3);

    if ((side_1+side_2>side_3) && (side_2+side_3>side_1) && (side_1+side_3>side_2))
    {   
        printf("The tringle is valid");
    }
    else
    {
        printf("Not valid");
    }
    
    return 0;


}