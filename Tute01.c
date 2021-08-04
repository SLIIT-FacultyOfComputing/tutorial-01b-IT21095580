/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2;
  int total;
  float avg;
  
  printf("Enter marks of first subject : \n");
  scanf("%d", &mark1);

  printf("Enter marks of second subject : \n");
  scanf("%d", &mark2);

  total = mark1+mark2;
  avg=total/2.00;

  printf("Average of two marks = %.2f\n",avg);
  return 0;
}

