#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Demonstrates precedence of operands.
*/
int main()
{
	//Variables
	int a, b, c;
	a = 8;
	b = 4;
	c = 2;
	
	//Print stuff	
	printf("\n8+4*2 is: %d. \n\n", a + b * c);
	printf("8*4+2 is: %d. \n\n", a * b + c);
	printf("8/4*2 is: %d. \n\n", a / b * c);
	printf("8%%4-2 is: %d. \n\n", a % b - c);
	printf("8/4+2 is: %d. \n\n", a / b + c);
}