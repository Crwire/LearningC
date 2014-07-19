#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Demonstrates multiplication without assignment.
*/
int main()
{
	
	//Variables
	int i;
	float f;
	
	//Process
	printf("Input a real, space, integer: ");
	scanf("%f %d", &f, &i);
	//Output
	printf("The product is: %f.\n", i*f);
}