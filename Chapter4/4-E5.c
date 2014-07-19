#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Running without a prototype...
Meant to show that by default, return is int
and no assumptions for input types. Doesn't
compile however... 
*/

int main()
{
	int a = 5;
	float b = 5.5;
	printf("%d \n", test(a, b));
}

float test(int x)
{
	int z;
	z = 2 * x;
	return(z);
}