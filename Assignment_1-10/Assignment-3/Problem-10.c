#include<stdio.h>

int main(){
    float cp,sp,profit,Loss;
    printf("Enter cost price and selling price");
    scanf("%f %f",&cp,&sp);

    profit = sp - cp;
    Loss = cp - sp;

    if (sp - cp == profit && (sp - cp) > 0)
    {
        printf("profit is %f",profit);
    }
    else if (cp - sp == Loss)
    {
        printf("Loss is %f",Loss);
    }

    return 0;
    
}