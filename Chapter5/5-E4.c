#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Passing a value instead of a pointer to a function
*/

void calculate_rate_1(int, int, int, float*);

int main()
{
	//Variables
	int car, truck, bike;
	float rate;
	
	//Process
	calculate_rate_1(10, 10, 10, 10); //turns out this is illegal!
	printf("Rate is ", rate);
}

void calculate_rate_1(int x, int y, int z, float *r)
{
	*r = 22.3*x + 22.3*y + 26.1*z;
}