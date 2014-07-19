#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Demonstrates menu selection with different results
*/
int main()
{
	
	//Variables
	int i;
	
	//Process
	printf("Choose one of the following:\n\n1. Choice one\n2. Choice two\n3. Choice three\n4. Choice four\n\nEnter your choice here... ");
	scanf("%d", &i);
	//Output
	switch(i){
		case 1: printf("Good choice.\n");
				break;
		case 2: printf("Have a nice day.\n");
				break;
		case 3: printf("Change your oil.\n");
				break;
		case 4: printf("Cheers!\n");
				break;
		default: printf("That's not a choice...\n");
	}
}