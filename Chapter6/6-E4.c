#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Using pointer arithmetic in an array
*/

int main()
{
	//Variables
	int vehicle[] = {10, 20, 30};
	int *p, a = 15;
	
	//Process
	p = vehicle;
	printf("%d %d %d \n", vehicle[1], *(p+1), p[1]);
	//Here they all print out the same!
	
	p = &a;
	printf("%d %d %d \n", p[0], *(p+1), p[1]);
	//p[0] works fine, but the otehrs are addresses (lo mismo)
}