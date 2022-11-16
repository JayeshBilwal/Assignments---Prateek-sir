#include<stdio.h>

int main(){

     float S1,S2,S3,S4,S5,total_Marks,Percentage;
     printf("Enter the S1,S2,S3,S4 and S5 Marks");
     scanf("%f%f%f%f%f",&S1,&S2,&S3,&S4,&S5);

     total_Marks = S1 + S2 + S3 + S4 + S5;
      
      if (S1 > 33 && S2 > 33 && S3 > 33 && S4 > 33 && S5 > 33)
      {
      printf("Total Marks of the student is %f\n",total_Marks);
      Percentage = (total_Marks/500)*100;
      printf("The percentage is: %f\n",Percentage);
      printf("Congratulation!! You have passed this exam");
      }
      else
      {
       printf("Sorry! You have not cleared this exam");
      }
      
      
     
    return 0;
}