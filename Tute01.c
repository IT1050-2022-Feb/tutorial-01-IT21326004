/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1,mark2,tot,avg;
	
	printf("Enter mark 1:");
	scanf("%f",&mark1);
	
	printf("Enter mark 2:");
	scanf("%f",&mark2);
	
	tot = mark1 + mark2;
	avg = tot / 2.0;
	
	printf("Average of two marks is %.2f",avg);
  
  return 0;
}

