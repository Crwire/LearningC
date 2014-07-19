#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Testing some for loop paradigms: looping floats
*/
int main()
{
	//Variables
	float count, total;
	
	//Process
	for (count = 7.0; count <= 25.0; count++)
	{
		total = total + count; printf("%f\n", total);
	}
}