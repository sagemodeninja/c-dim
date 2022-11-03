/* 
This program returns the number of days in a month.
Author:  Gary Antier
Date:    2022-11-02
*/

#include <stdio.h>

int max(int, int);
void scan(char[], int*);
int daysInMonth(int, int);

int main()
{
   int month, year, dim;

   printf("This program returns the number of days in a month.\n\n");

   scan("month", &month);
   scan("year", &year);

   dim = daysInMonth(month, year);
   printf("\n%d\n", dim);

   return 0;
}

int max (int a, int b)
{
   return (a > b) ? a : b;
}

void scan(char name[], int* var)
{
   printf("Enter value for %s: ", name);
   scanf("%d", var);
}

int daysInMonth(int month, int year) 
{
   int centennial = (year % 100) == 0;
   int leap = year % 4 * max(1, centennial * 100) == 0;

   return 30 + (month + month / 8) % 2 - max(0, 2 * (month == 2) - leap);
}
