#include<stdio.h>

int main(){
    char ch;

    printf("Enter a character:");
    scanf("%c",&ch);
    
    if (ch == 'A')
    {
    printf("Upper Case");
    }
    else if(ch == 'a')
    {
        printf("Lowwer Case");
    }
    

    return 0;
    
    


}