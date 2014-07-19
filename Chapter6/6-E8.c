#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Checking addresses of points in a 2D array
Essentially, its a 1D array of 1D arrays.
x = row whilst *x = element, whilst x = 1:
x + 1 = 10 and *x + 1 = 2.
*/

int main()
{
	//Variables
	int x[3][3] = {{1, 2, 3}, {10, 20, 30}, {100, 200, 300}};
	
	//Process
	printf("Locations %p of [0][0] and %p of [1][0]\n\n", &x[0][0], &x[1][0]);
	printf("%p %p \n", x, *x);
	printf("%p %p \n", x+1, *x+1);
	printf("%p %u \n", x[0], *x[0]);
}