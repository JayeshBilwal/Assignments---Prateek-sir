#include<stdio.h>

int power(int x,int y){
    if(y==1)
       return x;
    return x * power(x,y-1);
}

int main(){
    int pow;
    pow = power(5,2);
    printf("%d",pow);

    return 0;
}