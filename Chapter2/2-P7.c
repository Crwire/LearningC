#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Demonstrates menu selection.
*/
int main()
{
	
	//Variables
	int i;
	
	//Process
	printf("Choose one of the following:\n\n1. Choice one\n2. Choice two\n3. Choice three\n4. Choice four\n\nEnter your choice here... ");
	scanf("%d", &i);
	//Output
	printf("\n\nYour choice is: %d.\n", i);
}