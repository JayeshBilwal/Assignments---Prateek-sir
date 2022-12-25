#include<stdio.h>

int main(){

    int day;
    printf("Enter a Day:");
    scanf("%d",&day);

    switch (day)
    {
    case 1:
        printf("have a great Monday");
        break;
    case 2:
        printf("and then cameATuesday");
        break;
    case 3:
        printf("Have a great Wednesday");
        break;
    case 4:
        printf("Happy Thursday my friend");
        break;
    case 5:
        printf("Yeah it's Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("it's Sunday let's fun");
        break;
    
    default:
        printf("Invalid day");
        break;
    }


}