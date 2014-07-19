#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Basic pointers: you can't mix types!
*/

int main()
{
	//Variables
	int myint, *p, *q;
	char mychar;
	
	//Process
	myint = 5;
	mychar = 'C';
	
	p = &myint;
	q = &mychar;

	p = q;
	printf("Int %d and Char %c\n", *p, *q);
}