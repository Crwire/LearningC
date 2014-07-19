#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Demonstrates swapping variables and importance of operators.
*/
int main()
{
	
	//Variables
	int day, month, year;
	
	//Process
	printf("Put an EU style date (DD-MM-YY): ");
	scanf("%d %d %d", &day, &month, &year);
	//Correct the dashes
	day = sqrt(day*day);
	month = sqrt(month*month);
	year = sqrt(year*year);
	//Print as USA
	printf("In USA: %d-%d-%d.\n", month, day, year);
}