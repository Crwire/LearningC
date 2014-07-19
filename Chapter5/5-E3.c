#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Pointer contents without assignment
*/

int main()
{
	//Variables
	int i, *p;
	float f, *q;
	char c, *r;
	
	//Process
	printf("Pointer values: %d, %f, %c\n", *p, *q, *r);
}