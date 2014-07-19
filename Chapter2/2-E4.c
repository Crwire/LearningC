#include <stdio.h>
#include <math.h>
#include <string.h>

/*
This program prints ints, floats and chars as each other.
*/
int main()
{
	//Variables
	int x = 65;
	float y = 66.5;
	char z = 'A';
	
	//X variations
	int yI = y;
	int zI = z;
	
	//Y variations
	float xF = x;
	float zF = z;
	
	//Z variations
	char xC = x;
	char yC = y;
	
	//Print stuff	
	printf("\nINTS\nFloat: %d\n", yI);
	printf("\nChar: %d\n", zI);
	printf("\nFLOATS\nInt: %f\n", xF);
	printf("\nChar: %f\n", zF);
	printf("\nCHARS\nInt: %c\n", xC);
	printf("\nFloat: %c\n", yC);
}