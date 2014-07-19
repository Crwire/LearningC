#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Values of pointers
*/

int main()
{
	//Variables
	int *p;
	int i = 5;
	
	//Process
	printf("Before initialising: %p\n", p);
	p = NULL;
	printf("After initialising: %p\n", p);
}