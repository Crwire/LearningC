#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Demonstrates how numbers after % add spaces, and decimals round (dp).
*/

int main()
{
	//Variables
	int x, y;
	x = 3; y = 5;
	
	//Print stuff	
	printf("\n %1d %1d \n", x, y); //print with 1 space
	printf("\n %2d %2d \n", x, y); //print with 2 spaces
	printf("\n %10d, %10d \n", x, y); //print with 10 spaces
	
	//More variables
	float a = -368.555;
	//Printing
	printf("\n%f \n", a); //prints the float
	printf("\n%10.2f \n", a); //rounds float then ends at 10 spaces
	printf("\n%2f \n", a); //if doesn't reach, simply print
}