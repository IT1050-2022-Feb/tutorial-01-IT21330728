/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
   int phy,maths;
   int sum;
   float avg;
   printf("Enter the 2 subjects marks:");
   scanf("%d%d", &phy,&maths);
   
   sum=phy+maths;
   printf("Total marks %d",sum);
   avg=sum/2;
   printf("Avarage :%f",avg);
   
   
   
  return 0;
}

