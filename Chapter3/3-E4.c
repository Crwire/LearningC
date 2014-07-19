#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Basic switching: you can have any # of cases in any order,
cases may be blank and default can be anywhere BUT you 
should put it after a case with a break. A blank case will
run the 'default' code every time.
*/
int main()
{
	//Variables
	int rate_class = 1;
	
	//Process
	switch(rate_class)
	{
		case 1:
		case 2:
			printf("we got case 1 or 2\n");
			break;
		case 3:
			printf("we got case 3\n");
			break;
		case 10:
			printf("case 10 bitch\n");
			break;
		default:
			printf("nothing found\n");
	}
}