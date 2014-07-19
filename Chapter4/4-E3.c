#include <stdio.h>
#include <math.h>
#include <string.h>

/*
E3: More functions and scoping trials
E4: Using static for variable persistence between calls
*/

void p(int);
void fun(int);
int x = 4;

int main()
{
	//E4-3
	//printf("%d\n", x);
	//p(x);
	
	//E4-4: run fun() 5 times
	for(int c = 1;c<=5;c++)
	{
		fun(5);
	}
}

void p(int z)
{
	int x = 8;
	printf("%d was sent to printer 'p'.\n", x);
}

void fun(int y)
{
	static int x = 5;
	x = x + y;
	printf("Loop %d\n", x);
}