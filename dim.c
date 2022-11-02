// This program returns the number of days in a month.
// Developed by Gary Antier 2022
#include <stdio.h>

int max(int a, int b);
void scan(char title[], int* var);
int daysInMonth(int month, int year);

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

void scan(char title[], int* var)
{
	int input;

	printf("Enter value for %s: ", title);
	scanf("%d", &input);

	*var = input;
}

int daysInMonth(int month, int year) 
{
	int centennial = (year % 100) == 0;
	int leap = year % 4 * max(1, centennial * 100) == 0;

	return 30 + (month + month / 8) % 2 - max(0, 2 * (month == 2) - leap);
}