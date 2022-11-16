#include<stdio.h>
#include<stdio.h>

int main(){
    int num1,num2;

    printf("Enter first number");
    scanf("%d",&num1);
    printf("Enter first number");
    scanf("%d",&num2);

    if (num1 > num2 )
    {
      printf("%d is a geater number",num1);
    }
    else if (num1 == num2)
    {
     printf("%d and %d both are same number",num1,num2);
    }
    
    else{
        printf("%d is agreter number",num2);
    }
return 0;

}