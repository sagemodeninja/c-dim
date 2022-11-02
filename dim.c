// This program returns the number of days in a month.
// Developed by Gary Antier 2022
#include <stdio.h>

int max(int a, int b);

int main()
{
	int month, year, dim;

	printf("This program returns the number of days in a month.\n\n");

	printf("Enter value for month: ");
	scanf("%d", &month);

	printf("Enter value for year: ");
	scanf("%d", &year);
	
	int centennial = (year % 100) == 0;
	int leap = year % 4 * max(1, centennial * 100) == 0;
	dim = 30 + (month + month / 8) % 2 - max(0, 2 * (month == 2) - leap);

	printf("\n%d\n", dim);

	return 0;
}

int max (int a, int b)
{
	return (a > b) ? a : b;
}