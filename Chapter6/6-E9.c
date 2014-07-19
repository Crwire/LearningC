#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Assigning things to strings and some pointer stuff
*/

int main()
{
	//Variables
	float *q, z = 5555555555.5;
	char *p, x[] = "hello";
	
	//Process
	p = x;
	q = &z;
	printf("String: %s and Number: %s", p, q);
	
	/* EXPERIMENT 8 AND 9 */
	//Variables
	char myString[6];
	
	//This does work, however!
	strcpy(myString, "melon");
	printf("%s \n", myString);
	
	
	/*
	//This doesn't work
	myString = "melon";
	printf("%s \n", myString);
	*/
}