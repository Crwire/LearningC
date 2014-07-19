#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Demonstrates scan using %d and needing to use %f, with & addresses.
*/
int main()
{
	//Variables
	int a;
	float b;
	
	//Process
	scanf("%d", &a);
	printf("%d \n", a);
	scanf("%f", &b);
	printf("%f \n", b);
}